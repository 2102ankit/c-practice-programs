#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{ int row,col;
  printf("Enter the number of rows in the matrix: \n");
  scanf("%d",&row);
  printf("Enter the number of columns in the matrix: \n");
  scanf("%d",&col);
  int arr[row][col];
  printf("Enter the elements of the array: \n");
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
         scanf("%d",&arr[i][j]);
      }
  }
  printf("The orginal array is: \n");
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          printf("%d ",arr[i][j]);
      }printf("\n");
  }



  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        for(int k=0;k<col-j-1;k++)
        {
            if(arr[i][k]>arr[i][k+1])
            {
                swap(&arr[i][k],&arr[i][k+1]);
            }
        }
    }
  }

  printf("The sorted array is: \n");

  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          printf("%d ",arr[i][j]);
      }printf("\n");
  }

    return 0;
}