#include<stdio.h> 
#include<sys/stat.h>
int main(){
struct stat file;
stat("nadeem.txt",&file);
printf("Status mode - %o \n",file.st_mode);
return 0;
}

  