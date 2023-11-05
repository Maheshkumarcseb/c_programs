
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
int main()
{
    //string num1,num2;
    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;
   // scanf("%s %s",num1,num2);
    printf("Enter the size of first matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the size of second matrix\n");
    scanf("%d %d", &p, &q);
    if (m, n, p, q < 0)
    {
        printf("matrix multipication is only valid for the number one and greater than one");
        exit(0);
    }

    if (n != p)
        printf("Matrix multiplication is not possible");
    else
    {
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter the elements of the second matrix\n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("\n A- matrix is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("\n B- matrix is\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("The product of two matrices is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
