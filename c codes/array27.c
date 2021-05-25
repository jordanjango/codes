//sparse matrix
#include<stdio.h>
int main(void)
{
    int arr[100][100];
    int i,j,r,c;
    int count=0;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the number of column: ");
    scanf("%d",&c);
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
    //logic
    for ( i = 0; i < r; i++)
    {    
        for ( j = 0; j < c; j++)
        {
            if(arr[i][j]==0)
            count++;
        }
           
    }
    if(count>2)
    printf("it is a sparse matrix\n");
    else{
    printf("not a sparse matrix\n");
    }
    printf("%d is number of zero",count);
return 0;
}