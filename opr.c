#include<stdio.h>
int main()
{
int A[100];
int n,hit=0;
printf("Enter the number of processes\n");
scanf("%d",&n);
printf("Enter the incoming stream\n");
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
int temp[100]={0};
int count[100]={0};
int f;
printf("Enter the number of frames\n");
scanf("%d",&f);
for(int i=0;i<n;i++)
{
int flag=0;
for(int j=0;j<f;j++)
{
if(A[i]==temp[j])
{
flag=1;
hit++;
}
if(temp[j]==0)
{
flag=1;
temp[j]=A[i];
break;
}
}
if(flag==0)
{
for(int a=0;a<f;a++)
{
int flag1=0;
for(int k=i;k<n;k++)
{
if(temp[a]==A[k])
{
flag1=1;
count[a]=k;
}
}
if(flag1==0)
count[a]=10000;
}
int max=0,ind;
for(int i=0;i<f;i++)
{

if(count[i]>max)
{
max=count[i];
ind=i;
}
}
temp[ind]=A[i];
}
printf("\n");
for(int i=0;i<f;i++)
{
if(temp[i]!=-1)
printf("%d ",temp[i]);
else
printf("-- ");
}
}
}
