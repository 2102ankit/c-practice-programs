#include <stdio.h>
#include <math.h>
int main()
{
    int m1, n1, m2, n2, i, j;

    printf("\nEnter the number of rows of matrix 1: ");
    scanf("%d", &m1);
    printf("\nEnter the number of columns of matrix 1: ");
    scanf("%d", &n1);
    printf("\nEnter the number of rows of matrix 2: ");
    scanf("%d", &m2);
    printf("\nEnter the number of columns of matrix 2: ");
    scanf("%d", &n2);

    int mat1[m1][n1], mat2[m2][n2];
    printf("\nEnter the elements of matrix 1: ");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter the elements of matrix 2: ");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int matsum[m1][n1];
    if (m1 == m2 && n2 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                matsum[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        printf("\nsum of matrix 1 and 2 is of order %dx%d:\n", m1, n1);
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d ", matsum[i][j]);
                if (j == n1 - 1)
                {
                    printf("\n");
                }
            }
        }
    }
    else
        printf("Matrix sum not possible:");

    int matdiff[m1][n1];
    if (m1 == m2 && n2 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                matdiff[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        printf("\nDifference of matrix 1 and 2 is of order %dx%d:\n", m1, n1);
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d ", matdiff[i][j]);
                if (j == n1 - 1)
                {
                    printf("\n");
                }
            }
        }
    }
    else
        printf("Matrix difference not possible:");

    int matmul[m1][n2];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            matmul[i][j] = 0;
        }
    }

    if (n1 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < n1; k++)
                    matmul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    if (n1 == m2)
    {
        printf("\nProduct of matrix 1 and 2 is of order %dx%d:\n", m1, n2);
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", matmul[i][j]);
                if (j == n2 - 1)
                {
                    printf("\n");
                }
            }
        }
    }
    else
    {
        printf("Matrix multiplication not possible.");
    }

    int transpose1[n1][m1];
    for (int i = 0; i < m1; ++i)
        for (int j = 0; j < n1; ++j)
        {
            transpose1[j][i] = mat1[i][j];
        }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < m1; ++i)
        for (int j = 0; j < n1; ++j)
        {
            printf("%d  ", transpose1[i][j]);
            if (j == n1 - 1)
                printf("\n");
        }

    int transpose2[n2][m2];
    for (int i = 0; i < m2; ++i)
        for (int j = 0; j < n2; ++j)
        {
            transpose2[j][i] = mat2[i][j];
        }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < m2; ++i)
        for (int j = 0; j < n2; ++j)
        {
            printf("%d  ", transpose2[i][j]);
            if (j == n2 - 1)
                printf("\n");
        }

    float sum = 0.0;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            sum += pow(mat1[i][j], 2);
        }
    }
    sum = sqrt(sum);
    printf("\nThe norm of matrix 1 is %f", sum);

    sum = 0.0;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            sum += pow(mat2[i][j], 2);
        }
    }
    sum = sqrt(sum);
    printf("\nThe norm of matrix 2 is %f", sum);

    return 0;
}

/* at line 36 paste 

printf("\nMatrix 1 of order %dx%d:\n",m1,n1);
for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ",mat1[i][j]);
            if (j==n1-1)
            {
                printf("\n");
            }
            
        }
        
    }
printf("\nMatrix 2 of order %dx%d:\n",m2,n2);
for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ",mat2[i][j]);
            if (j==n2-1)
            {
                printf("\n");
            }
            
        }
        
    }
*/