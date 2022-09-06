#include<stdio.h>
void main()
{
    int i,j,k,x=0,n,r,flag;
    printf("Enter the no:of processes: ");
    scanf("%d",&n);
    printf("Enter the no:of resourses: ");
    scanf("%d",&r);
    int max[n][r],alloc[n][r],avail[r],need[n][r],done[n],seq[n];
    printf("Enter the total no:of instances of resourses: \n");
    for(i=0; i<r; i++)
    {
        printf("Resource %d : ",i);
        scanf("%d",&avail[i]);
    }
    printf("Enter the maximum no:of resourses required for each processes: \n");
    for(i=0; i<n; i++)
    {
        printf("Process %d : ",i);
        for(j=0; j<r; j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter the allocated no:of resourses for each processes: \n");
    for(i=0; i<n; i++)
    {
        printf("Process %d : ",i);
        for(j=0; j<r; j++)
        {
            scanf("%d",&alloc[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<r; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    for(j=0; j<r; j++)
    {
        for(i=0; i<n; i++)
        {
            avail[j] = avail[j] - alloc[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        done[i] = 0;
    }
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            if(done[i] == 0)
            {
                flag = 0;
                for(j=0; j<r; j++)
                {
                    if(need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                {
                    done[i] = 1;
                    seq[x] = i;
                    x++;
                    for(int j=0; j<r; j++)
                    {
                        avail[j] = avail[j] + alloc[i][j];
                    }
                }
            }
        }
    }
    if(x != n)
    {
        printf("Deadlock occured" );
    }
    else
    {
        printf("Safe Sequence is : ");
        for(i=0; i<n; i++)
        {
            printf("P%d ",seq[i]);
        }
        printf("\n");
    }
}
