#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
void main()
{
pid_t childpid= fork();

if (childpid==0){
printf("I'm the child,child creation is successfull\n");
printf("Childid= %d\n",getpid());
printf("Parent id= %d\n",getppid());
}

if (childpid>0){
printf("I'm the parent and child creation is successfull\n");
printf("Parent id= %d\n",getpid());
printf("Childid = %d\n",childpid);
wait(NULL);
}
printf("Child process is terminated and parent process is running\n");
if(childpid<0){
printf("Child-parent creation unsuccessfull\n");
}
exit(0);
}
