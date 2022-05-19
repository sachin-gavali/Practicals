// Sachin Gavali 
// Array in pointer 
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[4] ={ 10 ,20,30,40};
    int *ptr[4];
    int sum  = 0 ; 
    int ave = 0 ;
    for (int i = 0; i < 4; i++)
    {
        // get the array element
        ptr[i] = &a[i];

        printf("\n%d ", *ptr[i]);
       
    }
}