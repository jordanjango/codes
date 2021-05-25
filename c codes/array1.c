//INPUT AND DISPLAY OF AN ARRAY
#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    int i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("/__________________________/\n\n");
    printf("the display is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}