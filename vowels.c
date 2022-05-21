#include<stdio.h>
int main(){
    char str[100];
    char *p;
   int  count= 0;
   int  count2= 0;
   printf(" Enter the String ");
   scanf("%s",&str);
   p=str;
  while(*p!='\0') {
       if(*p=='A'){
           count++;
       }
       ++p;
       count2++;
      
   }
   printf("%d\n",count);
     printf("%d\n",count2);
   return 0;

}