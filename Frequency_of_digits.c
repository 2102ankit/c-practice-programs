#include <stdio.h>

int main()
{
   long int n,x;
   long int ctr0=0,ctr1=0,ctr2=0,ctr3=0,ctr4=0,ctr5=0,ctr6=0,ctr7=0,ctr8=0,ctr9=0;
   printf("Enter the number: ");
   scanf("%ld", &n);
 

while (n!=0)
{   x=n%10;
   n=n/10;

   if (x==0)
   {
      ctr0=ctr0+1;
   }
   else if (x==1)
   {
      ctr1=ctr1+1;
   }
   else if (x==2)
   {
      ctr2=ctr2+1;
   }
   else if (x==3)
   {
      ctr3=ctr3+1;
   }
   else if (x==4)
   {
      ctr4=ctr4+1;
   }
   else if (x==5)
   {
      ctr5=ctr5+1;
   }
   else if (x==6)
   {
      ctr6=ctr6+1;
   }
   else if (x==7)
   {
      ctr7=ctr7+1;
   }
   else if (x==8)
   {
      ctr8=ctr8+1;
   }
   else if (x==9)
   {
      ctr9=ctr9+1;
   }
} 

printf("\nThe number of 0's is %ld",ctr0);
printf("\nThe number of 1's is %ld",ctr1);     
printf("\nThe number of 2's is %ld",ctr2);
printf("\nThe number of 3's is %ld",ctr3);
printf("\nThe number of 4's is %ld",ctr4);
printf("\nThe number of 5's is %ld",ctr5);
printf("\nThe number of 6's is %ld",ctr6);
printf("\nThe number of 7's is %ld",ctr7);
printf("\nThe number of 8's is %ld",ctr8);
printf("\nThe number of 9's is %ld",ctr9);

   return 0;
}