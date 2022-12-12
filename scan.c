#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the number of tracks\n");
scanf("%d",&n);
int A[100];
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
int d;
printf("Enter direction\n");
scanf("%d",&d);
int pos;
printf("Enter the intitial position of the head\n");
scanf("%d",&pos);
int mrange;
printf("Enter maximum range\n");
scanf("%d",&mrange);
int flag=0,min=10000,ind,sum=0;
if(d==1)
{
for(int i=0;i<n;i++)
{
if(A[i]>pos)
A[i]=-1;
}
sum+=mrange-pos;
pos=mrange;
while(1)
{
int min=1000,flag=0,ind;
for(int i=0;i<n;i++)
{
if(A[i]!=-1 && abs(A[i]-pos)<min)
{
flag=1;
min=abs(A[i]-pos);
ind=i;
}
}
if(flag==0)
break;
pos=A[ind];
sum+=min;
A[ind]=-1;
}
}
else
{
for(int i=0;i<n;i++)
if(A[i]<pos)
A[i]=-1;

sum+=pos;
pos=0;
while(1)
{
int min=1000,flag=0,ind;
for(int i=0;i<n;i++)
{
if(A[i]!=-1 && abs(A[i]-pos)<min)
{
flag=1;
min=abs(A[i]-pos);
ind=i;
}
}
if(flag==0)
break;
sum+=min;
pos=A[ind];
A[ind]=-1;
}
}
printf("Total disk movement: %d",sum);
}
