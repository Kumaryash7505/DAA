#include<stdio.h>
int main()
{
int A[100];
int n,hit=0,miss=0;
printf("Enter the number of processes");
scanf("%d",&n);
printf("Enter the incoming processes");
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
int f;
printf("Enter the number of frames\n");
scanf("%d",&f);
int temp[100];
int count[100];
for(int i=0;i<f;i++)
temp[i]=-1;
for(int i=0;i<n;i++)
{
int flag=0;
for(int j=0;j<f;j++)
{
if(A[i]==temp[j])
{
hit++;
flag=1;
}
else if(temp[j]==-1)
{
flag=1;
temp[j]=A[i];
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
int max=0,ind;
for(int a=0;a<f;a++)
if(count[a]>max)
{
printf("%d ",count[a]);
max=count[a];
ind=a;
}
temp[ind]=A[i];
}
printf("\n");
for(int i=0;i<f;i++)
printf("%d ",temp[i]);
}
printf("\nTotal page faults: %d",miss);
printf("\nTotal page hits: %d",hit);
}
