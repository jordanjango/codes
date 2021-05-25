//copying the elements of array
#include<stdio.h>
int main(void)
{
    int arr[100];
    int arr1[100];
    int i,j,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value of %d: ",i+1);
        scanf("%d",&arr[i]);
            
    }

    for(i=0;i<n;i++)
    {
        arr1[j]=arr[i];
        j++;
    }
printf("the copied elements are: ");
for(i=0;i<n;i++)
{
    printf("%d ",arr1[i]);
}
return 0;
}