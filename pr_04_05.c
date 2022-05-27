#include<stdio.h>
#include<math.h>
#include<string.h>

void insert(int n, int arr[], int index, int value)
{
    for (int i = n+1; i > index; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[index]=value;

    for (int i = 0; i < n+1; i++)
    {
        printf("%d,",arr[i]);
    }
    
    
}

int main()
{ 
     int n,index,value;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter location to be inserted:");
    scanf("%d",&index);
    index--;
    printf("Enter value to be inserted:");
    scanf("%d",&value);

    insert(n,arr,index,value);

    return 0;
}