#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
  int id;
    // make two process which run same
    // program after this instruction
 id =fork();
	if(id==0) {
		printf("\nHello from child\n\n");
		for(int i=1;i<=100;i++)
			printf("%d ",i);
		printf("\n\n");
	}
	else {
		wait(NULL);
		printf("Hello from parent\n\n");
   	}
    return 0;
}
