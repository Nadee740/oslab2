#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>

int main()
{
    DIR *dp;
    struct dirent *dirp;
    char ch[100];
    printf("Enter the directory d name\n");
    scanf("%s",ch);
    dp=opendir(ch);
    if (dp ==NULL) {
       printf("Couldnt open\n");
    }
    printf("Opened\n");
    while ((dirp = readdir(dp)) != NULL)
        printf("file name is %s\n", dirp->d_name);

    closedir(dp);
        printf("closedir");

    
}
