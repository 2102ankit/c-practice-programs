#include<stdio.h>
void print_fibo(int);

int main()
{   int x;
    printf("Enter the number of Fibinacci numbers exoexted as outout: ");
    scanf("%d",&x);
    print_fibo(x);

    return 0;
}

void print_fibo(int n)
{
    int a=0,b=1,c;

    printf("%d\n%d\n",a,b);

    int ctr=0;
    while(n>=2)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n--;
    }
}