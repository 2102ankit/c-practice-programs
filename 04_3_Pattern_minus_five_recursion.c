// // 3. Given a number n, print following a pattern without using any loop.
// // Example:
// // Input: n = 16
// // Output: 16, 11, 6, 1, -4, 1, 6, 11, 16
// // Input: n = 10
// // Output: 10, 5, 0, 5, 10

#include <stdio.h>
void pattern(int n)
{
    if (n > 0)
    {
        printf(" %d, ", n);
        pattern(n - 5);
        printf(" %d,", n);
    }
    else if (n <= 0)
    {
        printf("%d,", n);
    }
}
int main()
{
    int x;
    printf("Enter the input: ");
    scanf("%d", &x);
    pattern(x);
    return 0;
}

// #include<stdio.h>

// void pat(int n)
// {
//   printf("%d ",n);
//   if(n<=0)
//     return;
//   pat(n-5);
//   printf("%d ",n);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     pat(n);
//     return 0;
// }
 