// char upper or lower
// USING ASCII VALUE USE
// SACHIN GAVALI
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("  ENTER THE CHAR \n");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("'%c' UPPERCASE\n",ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("'%c'LOWERCASE\n",ch);
    }
    else
    {
        printf("is not valid char\n");
    }
    return 0;
}