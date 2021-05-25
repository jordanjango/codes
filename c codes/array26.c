//displaying lower triangular matrix
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
        
    //logic
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(i<j)
            arr[i][j]=0;
        }
        
    }
    printf("_________________________________________\n");
    printf("lower triangular matrix is\n");
    //printing the array
    for ( i = 0; i < r; i++)
    {
       for ( j = 0; j < c; j++)
       {
           printf("%d\t",arr[i][j]);
           if(j==c-1)
           printf("\n\n");
       }
       
    }
return 0;  
}