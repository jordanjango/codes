#include<stdio.h>
int main()
{
    int num,rev_num=0,rem,temp;
    printf("enter the number: ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    printf("%d is the reversed number\n",rev_num);
    if(temp==rev_num)
    printf("%d is a palindrome\n",temp);
    else
    printf("%d is not a palindrome\n",temp);
    return 0;
}