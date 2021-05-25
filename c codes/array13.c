//bubble sort
#include<stdio.h>
int main(void)
{
    int arr[100];
    int i,j,n;
    int temp;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < n-1; i++)//n-1 because the max element will auto sort
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(arr[j]>=arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
        
    }
 for ( i = 0; i < n; i++)
 {
     printf("%d ",arr[i]);
 }
 return 0;   
}