#include <stdio.h>

void read_emp(int n, int ret_emp[n][2])
{
    int cur_yr;
    printf("Enter current year: ");
    scanf("%d", &cur_yr);
    for (int i = 0; i < n; i++)
    {
        printf("Enter emp no: ");
        scanf("%d", &ret_emp[i][1]);
        printf("Enter current age: ");
        scanf("%d", &ret_emp[i][0]);
        ret_emp[i][0] = cur_yr + 65 - ret_emp[i][0];
    }
}

void print_emp(int n, int ret_emp[n][2])
{
    int j;
    for (int i = 0; i < n - 1; i++)
    {
        int min_i = i;
        for (j = i + 1; j < n; j++)
        {
            if (ret_emp[j][0] < ret_emp[min_i][0])
            {
                min_i = j;
            }

            int t = ret_emp[i][0];
            ret_emp[i][0] = ret_emp[min_i][0];
            ret_emp[min_i][0] = t;
            
            t = ret_emp[i][1];
            ret_emp[i][1] = ret_emp[min_i][1];
            ret_emp[min_i][1] = t;
        }
    }
        
    for (int i = 0; i < n; i++)
    {
            if (i != 0 && (ret_emp[i][0] == ret_emp[i - 1][0]))
                printf("\t%d", ret_emp[i][1]);
            else
                printf("%d\t%d", ret_emp[i][0], ret_emp[i][1]);

            printf("\n");
    }
   
}

int main()
{
    int n;
    printf("Enter no of employees: ");
    scanf("%d", &n);

    int ret_emp[n][2];
    read_emp(n, ret_emp);
    print_emp(n, ret_emp);

    return 0;
}
