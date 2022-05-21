// sum of matrix in c
// SACHIN  GAVALI
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int sum[100][100];
    int i, j, s, d;
    printf(" ENTER THE VALUE OF ROW \n");
    scanf("%d", &s);
    printf(" ENTER THE VALUE OF col\n");
    scanf("%d", &d);
    printf("Enter value\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < d; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    printf(" THE MATRIX IS \n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("  \t%d   ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter value of 2nd Matrix\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < d; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }
    printf(" THE MATRIX IS \n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("  \t%d   ", b[i][j]);
        }
        printf("\n");
    }
    printf(" SUM OF MATRIX \n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < d; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("  \t%d   ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}