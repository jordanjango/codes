 //contagious sub ARRAY
//using kadens's algo(:()-2, -3, 4, -1, -2, 1, 5, -3
#include<stdio.h>
int kadens_sub_array(int arr[],int num);
int main()
{
int i,n,result=0,arr[100];
printf("enter the value of n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("enter the value of %d: ",i+1);
  scanf("%d",&arr[i]);
}
result=kadens_sub_array(arr,n);
printf("%d is the sum\n",result);
return 0;
}
int kadens_sub_array(int arr[],int num)
{

  int check_current=0;
  int check_final=0;
  for (int i = 1; i < num; i++)
  {
    check_current=check_current+arr[i];
    if(check_current>check_final)
    {
     check_final=check_current;
    }
    if(check_current<0)
    {
      check_current=0;
    }
  }
  return check_final;
}
