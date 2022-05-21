// Write the program to accpect the single digit and disply in world.
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("  ENTER THE NUMBER \n");
    scanf(" %d", &n);
    switch (n)
    {
    case 1:
    {
        printf("one");
        break;
    }
    case 2:
    {
        printf("two");
        break;
    }
    case 3:
    {
        printf("three");
        break;
    }
    case 4:
    {
        printf("four");
        break;
    }
    case 5:
    {
        printf("five");
        break;
    }
    case 6:
    {
        printf("six");
        break;
    }
    case 7:
    {
        printf("seven");
        break;
    }
    case 8:
    {
        printf("eight");
        break;
    }
    case 9:
    {
        printf("nine");
        break;
    }
    default:
    {
        printf(" CHOSE THE NUMBER UNDER 1 TO 9 ");
        break;
    }
    }
    return 0;
}