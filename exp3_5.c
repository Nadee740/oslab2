#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
    int file=open("text.txt",O_WRONLY );
    if(file<0)
    {
    	printf("Couldnt open file\n");
    	exit(0);
    }
    if(close(file)<0)
    {
    	printf("Couldnt close file\n");
        exit(0);
    }
    printf("Closed file\n");


	return 0;
}