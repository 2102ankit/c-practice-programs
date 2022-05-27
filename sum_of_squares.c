#include<stdio.h>
int main()
{ int n, sum=0;
 
// sum=sum+n*n
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for (int i = 1; i <=n; i++)
  {
    sum=sum+i*i;
  }
  printf("The sum of series is %d", sum);

  printf("\nThe sum by formula %d", n*(n+1)*(2*n+1)/6);
  
  return 0;
}