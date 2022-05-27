//Write a program to swap smallest and largest element in an array using
// pointers

#include<stdio.h>
void fun(int a[],int n)
{ int* max=a;int i;
    for(i=0;i<n-1;i++)
    {   if(*(a+i+1)>*(a+i))
        {	max=(a+i+1);
        }
    }

    int* min=a;int j;
    for(j=0 ;j<n-1;j++)
    {    if(*(a+j+1)<*(a+j))
        {	min=(a+j+1);
        }
    }

    int *temp;
    temp=max;
    max=min;
    min=temp;
}


int main()
{int n;
printf("Enter the number of elements in array: ");
scanf("%d",&n);
int array[n]; 

printf("Enter the elements in array: ");

for(int i=0; i<n; i++)
{
	scanf("%d",&array[i]);
}

printf("\n ");
for(int i=0; i<n; i++)
{
	printf("%d ",array[i]);
}

fun(array,n);
printf("\n ");
for(int i=0; i<n; i++)
{
	printf("%d ",array[i]);
}
return 0;
}
//={1,5,2,4,5,3,3,2,4,6,0,9}
// n=sizeof(array)/sizeof(array[0]);