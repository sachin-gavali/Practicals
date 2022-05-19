// SACHIN GAVALI
// Swap two numbers using pointer (interchange )
#include <stdio.h>
#include <conio.h>
int swap(int *a, int *b);
int main()
{
    int x = 10;
    int y = 20;
    swap(&x, &y); // using a call of reference function
    printf(" THE NUMBER AFTER SWAP \n x = %d \n y = %d", x, y);
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}