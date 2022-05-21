// char upper or lower
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("  ENTER THE CHAR \n");
    scanf(" %c", &ch);
    if (isupper(ch))


    
    {
        printf("'%c' UPPERCASE\n",ch);
    }
    else if (islower(ch))
    {
        printf("'%c'LOWERCASE\n",ch);
    }
    else
    {
        printf("is not valid char\n");
    }
    return 0;
}