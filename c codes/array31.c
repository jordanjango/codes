/*
question: Write a program in C to find the majority element of an array. Go to the editor
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array.
*/
#include<stdio.h>
int main(void)
{
  int arr[100];
  int i,n,j;
  int count=0;
  printf("enter the value of n: ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++) {
    printf("enter the value %d: ",i+1);
    scanf("%d",&arr[i]);
  }
for(i=0;i<n;i++)
{
  count=0;
  for(j=0;j<n;j++)
  {
   if(arr[i]==arr[j])
   {
   count++ ;
 }
  }
  if(count>n/2)
  {
    printf("the array has majority element \n");
  }
  else
  {
    printf("array doesnt have majority element\n");
  }
return 0;
}
}
