#include <stdio.h>

int main()
{
    int t,m=0,n,c,i;
    scanf("%d",&t);
    while(m<=t){
        c=0;
        scanf("%d",&n);
        int arr[n];
        for( i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int key;
        scanf("%d",&key);
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                printf("Key found\n");
                printf("Comparisions : %d",c);
                break;
            }
         }
         if(i==n){
            printf("Key not found\n");
            printf("Comparisions : %d",c);
         }

        m++;
        printf("\n");
    }
}
