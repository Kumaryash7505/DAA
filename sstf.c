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
int pos;
printf("Enter the initial position of the head\n");
scanf("%d",&pos);
int count=0,sum=0,ind;
while(count!=n)
{
int min=1000;
for(int i=0;i<n;i++)
{
if(A[i]!=-1 && abs(A[i]-pos)<min)
{
min=abs(A[i]-pos);
ind=i;
}
}
printf("%d \n",min);
sum+=min;
pos=A[ind];
A[ind]=-1;
count++;
}
printf("Total Track Movement is: %d",sum);
}
