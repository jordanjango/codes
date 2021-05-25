//REVERSE AN ARRAY
#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    int i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = n-1; i>=0; i--)
    {   
        printf("%d ",arr[i]);
    }
   return 0; 
}