#include <stdio.h>
#include <math.h>
#include <string.h>
void function(int arr1[],int arr2[],int n,int result[])
{ int ptr1=0,ptr2=0;
for (int i = 0; i < n; i++)
{

    if (arr1[ptr1] <= arr2[ptr2])
    {
        result[i] = arr1[ptr1];
        ptr1++;
    }
    else
    {
        result[i] = arr2[ptr2];
        ptr2++;
    }
}
}

int main()
{
    int s1,s2;
    printf("Enter size of 1 array:");
    scanf("%d", &s1);
    int arr1[s1];
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter size of 2 array:");
    scanf("%d", &s2);
    int arr2[s2];
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int n=s1+s2;
    int result[n];
    function(arr1, arr2,n,result);

    for (int i = 0; i < n; i++)
    {
        printf("%d,",result[i]);
    }
    

    return 0;
}