#include<stdio.h>
#include<math.h>
int isprime(int);
int main()
{   
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (isprime(num)) // any non zero value is true
        printf("%d is Prime",num);
    else
        printf("%d is Not prime",num);
    
    return 0;

}

int isprime(int n)
{
    int i;
    for (i=2; i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
