//COPYING THE ELEMENTS(LAME METHOD)
#include<stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int i,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for ( i= 0; i < n; i++)
    {
            arr2[i]=arr1[i];
            
    }
   printf("the copied elements are: ");
   for ( i = 0; i < n; i++)
   {
       printf("\n%d \n",arr2[i]);
   }
   
  return 0;  
}