//sum of rows and columns individually
#include<stdio.h>
int main(void)
{
    int arr[100][100];
    int i,j,r,c;
    int sum1,sum2;//we can also use sum=0 and re initialise after every loop
    printf("enter the value of rows: ");
    scanf("%d",&r);
    printf("enter the value of column: ");
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
        
    
   //sum of rows 
   for ( i = 0; i < r; i++)
   {  
       sum1=0;
       for ( j = 0; j < c; j++)
       {
        sum1=sum1+arr[i][j];   
       }
     printf("%d is the sum of row %d\n",sum1,i+1); 
   }
   printf("___________________________\n");
  //sum of columns
  for ( j = 0; j < c; j++)
  { 
      sum2=0;
      for ( i = 0; i < r; i++)
      {
          sum2=sum2+arr[i][j];
      }
     printf("%d is the sum of column %d\n",sum2,j+1); 
  }
  
  return 0; 
}