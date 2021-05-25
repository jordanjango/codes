//binary search(only for sorted array)
#include<stdio.h>
int main(void)
{
    int arr[100];
    int low,high;
    int mid,n,ele;
    int i,found;
    low=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    high=n-1;
    for ( i = 0; i < n; i++)
    {   
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the value to be searched: ");
    scanf("%d",&ele);
    while(low<=high)
{   
    mid=(low+high)/2;
    if(ele<arr[mid]){
        high=mid-1;
    }
    else if(ele>arr[mid]){
        low=mid+1;
    }
    else if(ele==arr[mid]){
        printf("%d found at location %d",ele,mid);
        found=1;
        break;
    }
}
if(!found)
{
    printf("element not found");
}
return 0;
}