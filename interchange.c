// change the number in
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    int b;
    int tamp;
    printf(" ENTER THE NUMBER \n");
    scanf("%d", &a);

    printf("  ENTER THE NUMBER \n");
    scanf("%d", &b);
    printf(" \nTHE VALUE OF A %d:", a);
    printf(" \nTHE VALUE OF B %d :", b);

    tamp = a;
    a = b;
    b = tamp;
    printf(" \nTHE VALUE OF A %d:", a);
    printf(" \nTHE VALUE OF B %d :", b);
    printf(" \nTHE VALUE OF TAMP %d :", tamp);
    return 0;
}
