#include<stdio.h>
int main()
{
int A[100],hit=0,miss=0;
int n;
printf("Enter the number of processes\n");
scanf("%d",&n);
printf("Enter the incoming stream\n");
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
int temp[100];
int count[100];
for(int i=0;i<n;i++)
temp[i]=-1;
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
else if(temp[j]==-1)
{
temp[j]=A[i];
flag=1;
break;
}
}
if(flag==0)
{
miss++;
for(int k=0;k<f;k++)
{
for(int l=i;l>=0;l--)
{
if(temp[k]==A[l])
{
count[k]=l;
break;
}
}
}
int min=1000,ind;
for(int a=0;a<f;a++)
if(count[a]<min)
{
min=count[a];
ind=a;
}
temp[ind]=A[i];
}
printf("\n");
for(int i=0;i<f;i++)
printf("%d ",temp[i]);
}
printf("\nTotal page fault :%d",miss);
printf("\nTotal page hit :%d",hit);
}


