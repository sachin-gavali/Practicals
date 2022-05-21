// find the factor
// and sum of all factors
// Sachin gavali
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    int i;
    int sum;
    printf(" ENTER THE NUMBER ");
    scanf("%d", &num);
    printf(" \nTHE NUMBER IS = %d\n", num);
    for ( i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
           sum= i+sum;
            
        }
    
    
    }
    printf("The sum of factors = %d",sum);


    return 0;
}