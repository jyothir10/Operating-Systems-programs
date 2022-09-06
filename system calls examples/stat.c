//stat system call

#include<stdio.h>
#include<sys/stat.h>
int main()
{
  //pointer to stat struct
  struct stat sfile;

  //stat system call
  stat("test.txt", &sfile);

  //accessing st_mode (data member of stat struct)  
  printf("st_size = %ld bytes\n\n", sfile.st_size);
  return 0;
}

