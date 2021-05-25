//storing the even and odd element in different array
#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,k,n;
    int arr1[100];
    int arr2[100];
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i = 0;i < n; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
        arr1[j]=arr[i];
        j++;
        }
        else
        {
            arr2[k]=arr[i];
            k++;
        }
    }
    printf("even elements are: ");
   for ( i = 0; i < j; i++)
   {
       printf("%d ",arr1[i]);
   }
   printf("\nodd elements are: ");
   for ( i = 0; i < k; i++)
   {
       printf("%d ",arr2[i]);
   }
return 0;  
}