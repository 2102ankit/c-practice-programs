#include <stdio.h>
#include <math.h>
#include <string.h>

void sort(int n, int arr[], int evenarr[], int oddarr[])
{
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenarr[e] = arr[i];
            e++;
        }
        else
        {
            oddarr[o] = arr[i];
            o++;
        }
    }

    printf("Odd array is:\n");
    for (int i = 0; i < e; i++)
    {
        printf("%d, ", evenarr[i]);
    }

    printf("\nOdd array is:\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d, ", oddarr[i]);
    }
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

    int evenarr[n];
    int oddarr[n];

    sort(n, arr, evenarr, oddarr);
    return 0;
}