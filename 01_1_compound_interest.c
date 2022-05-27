
#include <stdio.h>
#include <math.h>

int main()
{
   float P=500000,R=3.5, T=10, SI, CI ;
    SI=P*R*T/100.0;
    printf("The Simple Interest on Rs. 5,00,000 for 10 years at 3.5 p.c.p.a is Rs.%f", SI);

    CI=P*pow( (1 + R/(100)), T) -P;
    printf("\nThe Compound interest compounded annually is Rs.%f", CI);

    CI=P*pow( (1 + R/(100*2)), T*2) -P;
    printf("\nThe Compound interest compounded semi-annually is Rs.%f", CI);

    CI=P*pow( (1 + R/(100*4)), T*4) -P;
    printf("\nThe Compound interest compounded quarterly is Rs.%f", CI);

    CI=P*pow( (1 + R/(100*12)), T*12) -P;
    printf("\nThe Compound interest compounded monthly is Rs.%f", CI);

    CI=P*pow( (1 + R/(100*365)), T*365) -P;
    printf("\nThe Compound interest compounded daily is Rs.%f", CI);



   return 0;
}
