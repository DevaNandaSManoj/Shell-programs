#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
char*args[]={"./EXEC",NULL};
execvp(args[0],args);
printf("\End");\
return 0;
}
