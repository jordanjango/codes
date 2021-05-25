//linear search(arrays)
#include<stdio.h>
int main(void)
{
    int arr[100];
    int i,n;
    int ele;
    int found=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
       printf("enter the value %d: ",i+1);
       scanf("%d",&arr[i]); 
    }
        printf("enter the element to be searched: ");
        scanf("%d",&ele);
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==ele)
        {
        printf("%d is found at location %d\n",ele,i);
        found=1;
        break;
        }
    }
        if(!found)
        {
            printf("not found\n");
        }
    return 0;
}