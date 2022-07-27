#include<stdio.h>
 
struct times
{
       int p,art,but,wtt,tat,rnt;
};
 
 
void sortart(struct times a[],int pro)
{
       int i,j;
       struct times temp;
       for(i=0;i<pro;i++)
       {
              for(j=i+1;j<pro;j++)
              {
                     if(a[i].art > a[j].art)
                     {
                           temp = a[i];
                           a[i] = a[j];
                           a[j] = temp;
                     }
                     else if(a[i].art==a[j].art && a[i].but>a[j].but){
                           temp = a[i];
                           a[i] = a[j];
                           a[j] = temp;
                     }
              }
       }
       return;
}
 
int main(){
       int i,j,pro,time,remain,flag=0;
       struct times a[100];
       float avgwt=0,avgtt=0;
       printf("SJF Scheduling Algorithm\n");
       printf("Enter Number Of Processes : ");
       scanf("%d",&pro);
       remain=pro;
       for(i=0;i<pro;i++)
       {
              printf("Enter arrival time and Burst time for Process P%d : ",i);
              scanf("%d%d",&a[i].art,&a[i].but);
              a[i].p = i;
              a[i].rnt = a[i].but;
       }
       sortart(a,pro);
       printf("\n_______________________________________\n\n");
       printf("Gantt Chart\n");
       printf("0");
       for(time=0,i=0;remain!=0;) {
              remain--;
              a[i].wtt=time-a[i].art;
              avgwt=avgwt+a[i].wtt;
              a[i].tat=a[i].wtt+a[i].but;
              avgtt=avgtt+a[i].tat;
              time=time+a[i].but;
              if(a[i+1].art>time){
                     time=a[i+1].art;
              }
              printf(" -> [P%d] | %d",a[i].p,time);
              i++;

       }
       printf("\n\n");
       printf("__________________________________________________\n\n");
       printf("Process\tArrival\tBurst\tTurnAround\tWaiting\n");
       printf("__________________________________________________\n");
       for(i=0;i<pro;i++){
              printf("P%d\t%d\t%d\t%d\t\t%d\n",a[i].p,a[i].art,a[i].but,a[i].tat,a[i].wtt);
       }
       avgwt = avgwt/pro;
       avgtt = avgtt/pro;
       printf("__________________________________________________\n");
       printf("Average Waiting Time : %.2f\n",avgwt);
       printf("Average Turnaround Time : %.2f\n",avgtt);
       return 0;
} 