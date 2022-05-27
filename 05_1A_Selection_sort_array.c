#include <stdio.h>
void main()
{   int n=5;
    int a[5] = {65, 12, 22, 11, 25};
    int pass, small_ind, t, i;

    for (pass = 1; pass <= n - 1; pass++)
    {   small_ind = pass - 1;
        for (i = pass; i < n; i++)
        {   if (a[i] < a[small_ind])
                small_ind = i;
        }
        t = a[pass - 1];
        a[pass - 1] = a[small_ind];
        a[small_ind] = t;
    }

    printf("Final array\n");
    for (i = 0; i < n; i++)
    {printf("%d ", a[i]);}
}