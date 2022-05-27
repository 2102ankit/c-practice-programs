#include <stdio.h>
void main()
{   int array[] = {1, 2, 1, 4, 3, 2, 1, 3, 2, 1, 4, 5, 7, 6, 9, 9};
    int i, j, temp;
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++)
    {   j = i + 1;
        while (j < length)
        {   if (array[j] == array[i])
            {   temp = array[j];
                for (int x = j; x < length; x++)
                {   array[x] = array[x + 1];
                }
                array[length - 1] = temp;
                length--;
            }
            else
            {   j++;
            }
        }
    }
    printf("Final array\n");
    for (int x = 0; x < length; x++)
    {        printf("%d ", array[x]);
    }
}
