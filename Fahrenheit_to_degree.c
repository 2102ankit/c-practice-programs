#include <stdio.h>
#include <math.h>

int main()
{
    int F,C;
    printf("Enter the temperature in Fahrenheit: " );
    scanf("%d", &F);
    C=(F-32)*(5/9.0);
    printf("The Corresponding temperature in Celcius is %d ", C );

    return 0;
}
