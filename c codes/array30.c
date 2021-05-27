//W3R resource arrays question-32(check it out)
//Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
#include<stdio.h>
int main(void)
{
  int arr[100],search,i,j,n;
  printf("enter the value of n: ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++) {
    printf("enter the value %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("enter the sum you want: ");
  scanf("%d",&search);
  for ( i = 0; i < n-1; i++) {
    for ( j = i+1; j < n; j++) {
      if(arr[i]+arr[j]==search)
      {
        printf("%d and %d is the element for sum\n",arr[i],arr[j]);
      }

    }
  }
  printf("element doesnt exists for sum\n");
  return 0;
}
