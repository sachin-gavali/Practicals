// Trancepose of matrix
// sachin gavali
#include <stdio.h>
#include <conio.h>
int main()
{
    int s[3][3];
    int i, j;
    printf("ENTER THE VALUE\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    // print the matrix
    printf(" matrix=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  \t%d   ", s[i][j]);
        }
        printf("\n");
    }
    printf(" tranpose of matrix=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  \t%d  ", s[j][i]);
        }
        printf("\n");
    }
    return 0;
}