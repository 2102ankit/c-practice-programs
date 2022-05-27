#include<stdio.h>
#include<math.h>
int main()
{ int n,x, sum=0;

  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("\nEnter the value of x: ");
  scanf("%d", &x);
  for (int i = 0; i <n; i++)
  {
    sum=sum+pow(x,i);
  }
  printf("The sum of series is %d", sum);  
  return 0;
}