#include <stdio.h>

int main ()
{
	int a,b,c;

	printf ("Enter angles");
	scanf ("%d %d",&a,&b);
	c=180-a-b;
	printf("angle c is %d",c);
return 0;
}