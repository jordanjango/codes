//sum of diagnols of a matrix
#include<stdio.h>
int main(void)
{
    int arr[100][100];
    int i,j,r,c;
    int sum=0;
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

        /*display the array*/
        for ( i = 0; i < r; i++)
        {
           for ( j = 0; j < c; j++)
           {
               printf("%d\t",arr[i][j]);
               if(j==c-1)
               printf("\n\n");
           }
           
        }
        

    
    /*logic for sum*/
        for ( i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if(i==j)
                {
                    sum=sum+arr[i][j];
                }
            }
            
        }
    /*print the sum*/
    printf("%d is the sum of diagnol of the matrix\n",sum);
    return 0;       
    
}