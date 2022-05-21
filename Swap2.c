#include <stdio.h>
int swap(int *a, int *b);
int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}