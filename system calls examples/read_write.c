// read write system calls

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
  int size1, size2, req=10;
  char *c = (char *) calloc(100, sizeof(char));
  
  int fd1 = open("test1.txt", O_RDONLY);
  int fd2 = open("test2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  
  if (fd1 < 0) { perror("r1"); exit(1); }
  if (fd2 < 0) { perror("r1"); exit(1); }
 
  size1 = read(fd1, c, req);
  printf("fd1 : %d\t\tRequested %d bytes, returned %d bytes\n", fd1, req, size1);
  c[size1] = '\0';
  printf("%s\n", c);
  
  close(fd1);

  size2 = write(fd2, c, size1);
  
  printf("fd2 : %d\t\tRequested %d bytes, returned %d bytes\n", fd2, size1, size2);
  
  close(fd2);
}

