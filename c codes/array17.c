//matrix display (ixj)
#include<stdio.h>
int main(void)
{
    int arr1[100][100];
    int i,j,n1,n2;
    printf("enter the value of rows: ");
    scanf("%d",&n1);
    printf("enter the value of column: ");
    scanf("%d",&n2);
    printf("enter the elements for 1st matrix\n");
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("enter the elements a[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    
    }
printf("The elements are:\n");
for ( i = 0; i < n1; i++)
{
    for( j = 0; j < n2; j++)
    {
        printf("%d\t",arr1[i][j]);
    }
printf("\n\n");
}
return 0;  
}