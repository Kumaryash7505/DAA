#include<stdio.h>
int main()
{
int at[100],bt[100],wt[100],tat[100],ct[100],p[100];
int n;
printf("Enter the number of processes\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d%d%d",&at[i],&bt[i],&p[i]);
int min=1000,ind;
for(int i=0;i<n;i++)
{
    if(at[i]<min)
    {
        min=at[i];
        ind=i;
    }
}
int time=0;
if(bt[ind]==1)
{
    ct[ind]=at[ind]+1;
    time=ct[ind];
    tat[ind]=ct[ind]-at[ind];
    bt[ind]=0;
    at[ind]=-1;
}
else
{
    time=at[ind]+1;
    bt[ind]--;
}
printf("%d %d",at[ind],bt[ind]);
while(1)
{
    int max=0,flag=0;
    min=1000;
for(int i=0;i<n;i++)
{
    if(at[i]!=-1 && at[i]<=time && max<p[i])
    {
        flag=1;
        max=p[i];
        min=at[i];
        ind=i;
    }
}
if(flag==0)
break;
if(bt[ind]==1)
{
    time++;
    ct[ind]=time;
    tat[ind]=ct[ind]-at[ind];
    bt[ind]=0;
    at[ind]=-1;
}
else
{
    time++;
    bt[ind]--;
}
}
for(int i=0;i<n;i++)
printf("\n%d %d",ct[i],tat[i]);
}
