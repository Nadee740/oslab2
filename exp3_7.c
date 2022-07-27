#include<dirent.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	DIR *dp;
	char ch[100];
	printf("Enter the directory name\n");
	scanf("%s", ch);
	if(dp==NULL){
		printf("opened\n");
		closedir(dp);
		printf("Closed\n");
	}
}
