//FIND THE MISSING ELEMENT(FROM NUMBER WHICH ARE IN AP AS PER QUESTION IN W3R)
#include<stdio.h>
int main(void)
{
  int arr[100],sum=0;
  int i,n,ele,sum_n_terms;
  int num;
  printf("enter the value of n: ");
  scanf("%d",&n);
  num=n+1;
  for (i = 0; i < n; i++) {
    printf("enter the value of %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  sum_n_terms=(num*(num+1))/2;
  for (i = 0; i < n; i++) {
    sum=sum+arr[i];
  }
  ele=sum_n_terms-sum;
  printf("the missing element is %d\n",ele);
  return 0;
}
