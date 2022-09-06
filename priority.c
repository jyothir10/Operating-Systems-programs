void findWaitingTime(int processes[],int n,int bt[],int wt[]){
    wt[0] = 0;
    for(int i = 1;i<n;i++){
        wt[i] = bt[i-1] +wt[i-1];
    }
}

void sort(int processes[],int n,int bt[],int p[]){

    int small,temp;
    for(int i = 0;i<n;i++){
        small = i;
        for(int j = i+1;j<n;j++){
            if(p[j]<p[small]){
                small = j;
            }
        }
        if(small!=i){
            temp = p[i];
            p[i] = p[small];
            p[small] = temp;

            temp = bt[i];
            bt[i] = bt[small];
            bt[small] = temp;

            temp = processes[i];
            processes[i] = processes[small];
            processes[small] = temp;
        }
    }
}

void findTurnAroundTime(int processes[],int n,int bt[],int wt[],int tat[]){
    for(int i =0;i<n;i++){
        tat[i] = bt[i] + wt[i];
    }
}

void findavgTime(int processes[],int n,int bt[],int p[]){

    int wt[n],tat[n],total_wt = 0,total_tat = 0;

    sort(processes,n,bt,p);
    findWaitingTime(processes,n,bt,wt);
    findTurnAroundTime(processes,n,bt,wt,tat);

    printf("Processes  Burst time   Priority    Waiting time    Turn around time\n");
    for(int i =0;i<n;i++){
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("    P%d\t",processes[i]);
        printf("\t%d\t",bt[i]);
        printf(" %d\t",p[i]);
        printf("\t%d\t",wt[i]);
        printf("\t%d \n",tat[i]);
    }
    float avg_wt = (float)total_wt / (float)n;
    float avg_tat = (float)total_tat / (float)n;
    printf("Average waiting time = %f\nAverage turn around time = %f\n",avg_wt,avg_tat);
}

void main(){
    int processes[] = {1,2,3,4,5};
    int n = 5;
    int burst_time[] = {10,1,2,1,5};
    int priority[] = {3,1,4,5,2};
    findavgTime(processes,n,burst_time,priority);
}

