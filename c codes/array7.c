//merging two arrays(best way) and sorting(bubble sort)
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[500];
    int i,j,k,n1,n2;
    int n3;
    int temp =0;
    printf("enter the value of n1: ");
    scanf("%d",&n1);
    for ( i = 0; i < n1; i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("___________________\n");
    printf("enter the value of n2: ");
    scanf("%d",&n2);
    for ( j = 0; j < n2; j++)
    {
       printf("enter the value %d: ",j+1);
       scanf("%d",&arr2[j]);
    }
    /*merging the two arrays*/
   n3=n1+n2;
   for(i=0;i<n1;i++)
   {
       arr3[i]=arr1[i];
   }
   for ( j = 0; j < n2; j++)
   {
       arr3[i]=arr2[j];
       i++;
   }  
//bubble sort
    for(i=0;i<n3-1;i++)
    {
        for(k=0;k<n3-1-i;k++)
        {
            if(arr3[k+1]>arr3[k])
            {
                temp=arr3[k];
                arr3[k]=arr3[k+1];
                arr3[k+1]=temp;
            }
        }
    }

    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
  return 0; 
}