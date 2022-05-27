#include<stdio.h>
int main()
{   int n,key,i,j,small_ind,t,pass;

    printf("\nEnter the number of elements in array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: ");
    int a[n];
    for ( i = 0; i < n; i++)             //-----> scans array
    {
       scanf("\n%d",&a[i]);
    }

    printf("\nEnter the key to be checked: ");
    scanf("%d", &key);
    

    for (pass = 1; pass <= n - 1; pass++)
    {
        small_ind = pass - 1;
        for (i = pass; i < n; i++)
        {
            if (a[i] < a[small_ind])
            {
                small_ind = i;
            }
        }

        t = a[pass - 1];
        a[pass - 1] = a[small_ind];
        a[small_ind] = t;
    }

    int high = n-1, mid;

    for (int low = 0; low <= high;)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("\nThe location of the key is %d", mid);
            break;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
            if (low > high)
            {
                printf("\nKey not found");
                break;
            }
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
            if (low > high)
            {
                printf("\nKey not found");
                break;
            }
        }
    }
    return 0;
}



// #include<stdio.h>
// void main()
// {   int n=5,a[5]={11,12,22,25,65};
//     int key,low,high= n-1,mid;
//     printf("Enter the key to be searched: ");
//     scanf("%d",&key);

//     for (int low = 0; low <= high;)
//     {   mid = (low + high) / 2;

//         if (a[mid] == key)
//         {   printf("The location of the key is %d", mid);
//             break;
//         }
//         else if (a[mid] > key)
//         {   high = mid - 1;
//             if (low > high)
//             {   printf("Key not found");
//                 break;
//             }
//         }
//         else if (a[mid] < key)
//         {   low = mid + 1;
//             if (low > high)
//             {   printf("Key not found");
//                 break;
//             }
//         }
//     }
// }

