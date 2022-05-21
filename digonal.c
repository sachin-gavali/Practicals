// sum of digonal elements in a matrix
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i, j, k, l;
    int sum;
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
    printf(" the sum of digonal elements");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf(" the sum = %d",sum);
    return 0;
}