// write a c progrm for matrix multiplication
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i, j, k, l;
    printf(" ENTER THE NUMBER \n ");
    scanf(" %d", &l);

    printf(" ENTER THE NUMBER \n ");
    scanf(" %d", &k);
    printf("ENTER THE MATRIX elements \n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" THE MATRIX \n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("  \t%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("ENTER THE 2nd MATRIX elements ");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf(" THE MATRIX is\n ");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("  \t%d  ", b[i][j]);
        }
        printf("\n");
    }
    printf(" THE MATRIX A*B \n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            printf("  \t%d  ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
