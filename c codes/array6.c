//Unique elements in arrays
#include<stdio.h>
int main()
{
  int arr[100];
  int i,j,n;
  int count;
  printf("enter the value of n: ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    printf("enter the value %d: ",i+1);
    scanf("%d",&arr[i]);
  }
    for ( i = 0; i < n; i++)
    {    
      count=0;
        for ( j = 0; j < n; j++)
        {
         if(arr[i]==arr[j])
         count++;
        }
       if(count>1) 
       printf("%d ",arr[i]);
    }
  return 0;  
}