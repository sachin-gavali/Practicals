// matrix
// sachin gavali
#include <stdio.h>
#include <conio.h>
int main()
{
    int m[3][3];
    int i, j;
    printf("ENTER THE NUMBERS \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}