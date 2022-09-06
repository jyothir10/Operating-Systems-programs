#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main() {
   pid_t pid;
   
   /* fork a child process */
   pid = fork();
   
   if(pid < 0) {  /* error occured */
       fprintf(stderr, "Fork Failed");
       return 1;
   }
   else if(pid == 0) { /* child process */
       printf("Child: %d is Executing...\n\n", getpid());
		printf("Child: Parent ID %d\n\n", getppid());
	
		exit(0);
       execlp("/bin/ls", "ls", NULL);
   }
   else { /* parent process */
        /* parent process will wait for the child to complete */
        printf("\nParent: Waiting for child to complete...\n\n");

        //abort();
        pid=wait(NULL);
        
         printf("\nParent: Child %d Completed...\n\n",pid);
         printf("Parent: ID = %d\n",getpid());
   }
   return 0;
}
        
