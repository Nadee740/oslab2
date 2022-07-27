
#include<stdio.h>

void main()
{
int alloc[100][100],max[100][100],need[100][100],available[100],flag[100];
int m,n;

printf("Enter the number of procesess : \n");
scanf("%d",&m);
printf("Enter the number of resources : \n");
scanf("%d",&n);

for(int i=0;i<m;i++)
{
printf("Enter the number of allocated resources for Process %d : ",i+1);

for(int j=0;j<n;j++)
{
scanf("%d",&alloc[i][j]);
}
}

for(int i=0;i<m;i++)
{
printf("Enter the maximum number of resources required for Process %d : ",i+1);

for(int j=0;j<n;j++)
{
scanf("%d",&max[i][j]);
}
}

printf("Enter the available resources : \n");
for(int j=0;j<n;j++)
{
scanf("%d",&available[j]);
}

printf("Needed Resources\n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
need[i][j]=max[i][j]-alloc[i][j];
printf("%d ",need[i][j]);
}
printf("\n");
}

for(int i=0;i<m;i++)
{
flag[i]=0;
}

//Check
int f,y=m;
while(y>0)
{
f=0;
int i;
for(i=0;i<m;i++)
{
int p=1;
//check for flag = false
if(flag[i]==0)
{

for(int j=0;j<n;j++)
{
if(need[i][j]<=available[j])
{
p=p*1;
}
else
{
p=p*0;
break;
}
}

if(p==1)
{
f=1;
//rintf("Found %dth\n",i+1);
break;
}
else
{
//printf("Not found available at %d\n",i+1);
}

}
else
{
//printf("Flag %d not false\n",i+1);
}
}

if(f==1)
{
printf("P[%d] : %d\n",i+1,y);
for(int j=0;j<n;j++)
{

available[j]+=alloc[i][j];
printf("%d ",available[j]);
}
printf("\n");
flag[i]=1;
y--;
}
else
{
printf("Deadlock detected unsafe state at %dth process\n",i+1);
break;
}
}
}