#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in Fahrenheit: " );
    scanf("%f", &F);
    printf("The Corresponding temperature in Celcius is %f",C=(F-32)*(5/9.0));

    return 0;
}

