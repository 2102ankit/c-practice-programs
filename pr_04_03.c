#include <stdio.h>
#include <math.h>
#include <string.h>
void find(int n, int arr[n])
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n%d & %d", arr[1], arr[n - 2]);
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    find(n, arr);

    return 0;
}