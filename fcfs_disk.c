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
printf("Enter the initial position of head\n");
scanf("%d",&pos);
int sum=0;
for(int i=0;i<n;i++)
{
sum+=abs(A[i]-pos);
pos=A[i];
}
printf("Number of track records movements: %d",sum);
}
