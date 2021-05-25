//logic(code-credits:RoseVZ and jordanjango)
#include<stdio.h>
int main(void)
{
    int arr[100][100];
    int check;
    int check2;
    int i,j,r,c;
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
     //logic
     for ( i = 0; i < r; i++)
     {   
       
         for (j = 0; j < c; j++)
         {
            if(i==j)
            {
                if(arr[i][j]==1)
                check=1;
                else
                check=0;
            }
            if(i!=j)
            {
                if(arr[i][j]==0)
                check2=1;
                else
                check2=0;
            }
         }
         
     }
    if(check==1&&check2==1) 
    printf("the matrix is identity matrix\n");
    else
    printf("matrix is not identity matrix\n");
    return 0;
}