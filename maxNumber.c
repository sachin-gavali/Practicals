// maxmimum number in two number
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10];
    int max;
    int i;
    int n;
    printf("  enter the value of elements\n");
    scanf("%d",&n);
    printf(" ENTER THE NUMBER \n ");
    for (i = 0; i < n; i++);
    {
        scanf(" %d", &a[i]);
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf(" \n MAXIMUM NUMBER\n = %d", max);
    getch();
}