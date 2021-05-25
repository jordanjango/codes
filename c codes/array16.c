//finding second largest element(i used bubble sort lol)
#include<stdio.h>
int main(void)
{
    int arr[100];
    int i,j,n,temp=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>=arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    printf("the elements are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n ",arr[i]);
    }
    printf("the second largest element is: ");
    printf("%d ",arr[n-2]);
 return 0;   
}