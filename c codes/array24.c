//sum of right diagonal(code credits-RoseVZ)
#include<stdio.h>
int main()
{
    int arr[100][100];
    int i,j,r,c;
    printf("enter the value of rows: ");
    scanf("%d",&r);
    printf("enter the value of columns: ");
    scanf("%d",&c);
      for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("enter the element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
     //display of matrix
     for ( i = 0; i < r; i++)
     {
         for ( j = 0; j < c; j++)
         {
             printf("%d\t",arr[i][j]);
             if(j==c-1)
             printf("\n\n");
         }
         
     }
     int sum=0;
     int x=c-1;
     for(int i=0;i<r;i++)
     {
         for(int j=x;j>=x;j--)
         {
             sum=sum+arr[i][j];
         }
         x--;
         
     }
     printf("the sum %d",sum);
}