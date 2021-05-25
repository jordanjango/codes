//check if two matrix are equal
#include<stdio.h>
int main(void)
{
    int arr1[100][100];
    int arr2[100][100];
    int i,j,r,c;
    int check=0;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the number of column: ");
    scanf("%d",&c);
    //MATRIX-1
    printf("input for matrix-1\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
        
    }
    //MATRIX-2
    printf("input for second matrix-2\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
        
    }
    for ( i = 0; i < r; i++)
    {   
        
        for ( j = 0; j < c; j++)
        {
           if(arr1[i][j]==arr2[i][j])
           check=1;
        } 
    }
  if(check==1)
  printf("matrix are equal\n");
  else
  printf("matrix are not equal\n"); 
  return 0; 
}