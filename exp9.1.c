#include<stdio.h>
struct process
{
int atime,btime,prty;
float swt,stt;
}p[50];


void main()
{
  int y, n, quant;
    printf(" Total number of process in the system: ");
    scanf("%d", &n);
    y = n;

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i + 1);
        printf(" Arrival time is: \t");
        scanf("%d", &p[i].atime);
        printf(" \nBurst time is: \t");
        scanf("%d", &p[i].btime);
        printf("\nPriority is: \t");
        scanf("%d",&p[i].prty);
        p[i].swt = 0;  
    }
int t=0;
    while(y>0)
    {
    int min,pos,i=0,count=0;
    for(i=0;i<n;i++)
    {
          if(p[i].atime<=t && p[i].btime>0){
          min=p[i].prty;
          pos=i;
          count=1;
          break;
          }
    }
    for(int j=i+1;j<n;j++)
    {
    if(p[j].atime<=t && p[j].btime>0 && p[j].prty<min)
    {
    min=p[j].prty;
    pos=j;
    count=1;
    }
    }
    if(count==1)
{
p[pos].swt=t-p[pos].atime;
    t=t+p[pos].btime;
    p[pos].stt=t-p[pos].atime;
    p[pos].btime=0;
    printf(" |P[%d]| %d", pos + 1, t);
    y=y-1;
}
else
{
t=t+1;
}
    }
float att=0,awt=0;
    for(int i=0;i<n;i++)
    {
    att+=p[i].stt;
    }
    for(int i=0;i<n;i++)
    {
    awt+=p[i].swt;
    }

    printf("\n-------------------------------------------------------------------------\n");
    printf("AVERAGE WAITING TIME : %f \n",awt/n);
    printf("AVERAGE TURNAROUND TIME : %f \n",att/n);
}


