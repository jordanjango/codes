//Transpose of two matrix
#include<stdio.h>
int main(void)
{
    int arr[100][100];
    int i,j,r,c;
    int temp=0;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the value of column: ");
    scanf("%d",&c);
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("enter the element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
    //display of matrix
    printf("/___________/\n");
    printf("The matrix entered is:");
    for ( i = 0; i < r; i++)
    {
       for (j = 0; j < c; j++)
       {
           printf("%d\t",arr[i][j]);
           if(j==c-1)
           printf("\n\n");
       }
       
    }
    printf("The transpose is:\n");
    /*transpose logic*/
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j  < c; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];  //swapping the opposite element
            arr[j][i]=temp;
        }
        
    }
  /*display of matrix*/
  for ( i = 0; i < r; i++)
  {
      for ( j = 0; j < c; j++)
      {
          printf("%d\t",arr[j][i]);
          if(j==c-1)
          printf("\n\n");
      }
      
  }
 return 0;   
}