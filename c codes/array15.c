//deleting the element in the array
#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;
    int pos;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for  (i = 0; i < n; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position of value to be deleted: ");
    scanf("%d",&pos);
    for ( i = pos ; i < n-1; i++)
    {
      arr[i]=arr[i+1];  
    }
    printf("The values are: ");
    for ( i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;     
}