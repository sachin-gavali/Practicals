#include <stdio.h>
int main()
{
    char a[100];
    printf(" Enter the String ");
    scanf("%s", &a);
    strlwr(a);
    char B[100];
    printf(" Enter the String ");
    scanf("%s", &B);
    int Upr = strupr(B);
    char c[100];
    int cpy = strcpy(c, a);
    int len = strlen(a);
    int rev = strrev(a);
    printf("%s\n", Upr);
    printf("%s\n", cpy);
    printf("%d\n", len);
    printf("%s\n", rev);
   
}