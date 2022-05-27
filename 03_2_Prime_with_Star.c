
#include<math.h>
#include<stdio.h>
int isprime(int);
int main()
{   
    int i=0,start,end,ctr=0;
    printf("Enter the start:");
    scanf("%d", &start);
    printf("Enter the end:");
    scanf("%d", &end);
    for ( i=start; i <= end; i++)
    {   
        if (isprime(i))
        {   
            printf("%d* ",i);
        }
        else
        {   
            printf("%d ", i); 
        }
        
        ctr++;
         if (ctr==10)
        {
            printf("\n");
            ctr=0;
        }
    }
return 0;
}

int isprime(int n)

{
    int x;
    if(n==1)
            return 0;
    for (x=2; x<=sqrt(n);x++)
        if(n%x==0)
            return 0;
    return 1;
}

 