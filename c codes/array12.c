//logic-2 for arrays merging
#include<stdio.h>
int  main(void)
{
    int arr1[100];
    int arr2[100];
    int i,j,n,m;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the value of %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("enter the value of m: ");
    scanf("%d",&m);
    for ( j = 0; j < m; j++)
    {
        printf("enter the value of %d: ",j+1);
        scanf("%d",&arr2[j]);
    }
    
    for ( i = 0; i < n; i++)
    {
        arr1[n+i]=arr2[i];
    }
for ( i = 0; i < m+n; i++)
{
    printf("%d ",arr1[i]);
}
return 0;
}