#include<stdio.h>
int main()
{
int at[100],bt[100],wt[100],tat[100],ct[100];
int n;
printf("Enter the number of processes\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d%d",&at[i],&bt[i]);
int t=3;
printf("1");
int time=0;
int q[100];
int f=0,r=0,count=0;
do{
if(count<n)
for(int i=0;i<n;i++)
{
if(at[i]!=-1 && at[i]<=time)
{
count++;
q[r]=i;
r++;
}
}
printf("%d ",at[q[f]]);
if(bt[q[f]]<=t && at[q[f]]!=-1)
{
int i=q[f];
time+=bt[i];
ct[i]=time;
tat[i]=ct[i]-at[i];
at[i]=-1;
bt[i]=0;
f++;
}
else if(at[q[f]]!=-1 && bt[q[f]]>t) {
int i=q[f];
time+=t;
bt[i]-=t;
if(count<n)
for(int j=0;j<n;j++)
{
if(at[j]!=-1 && at[j]<=time && j!=i)
{
count++;
q[r]=j;
r++;
}
}
q[r]=i;
r++;
f++;
}
}while(f!=r);
for(int i=0;i<n;i++)
printf("\n%d %d",ct[i],tat[i]);
}
