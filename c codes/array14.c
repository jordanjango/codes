//inserting an element between(unsorted)
#include<stdio.h>
int main()
{
    int arr[100];
    int p,ele,i,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value %d: ",i+1);    
        scanf("%d",&arr[i]);
    }
    printf("enter the position for new element: ");
    scanf("%d",&p);
    printf("/_____________________________________/");
    printf("\nenter the value to be inserted: ");
    scanf("%d",&ele);
    /*shifting the elements*/
    for ( i = n-1; i>=p; i--)//to avoid overlapping
    {
        arr[i+1]=arr[i];
    }
    arr[p]=ele;
    /*print the elements*/
    for ( i = 0; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
 return 0;   
}