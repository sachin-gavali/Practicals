// Sachin gavali 
// vowels and consonets 
#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    char *p;
    int V_count = 0;
    int C_count = 0; 
    printf(" Enter any string ");
    gets(str);
    p=str;
    while(*p !='\0'){
        if(*p =='A' || *p =='E' || *p =='I' || *p =='O' || *p =='U' || *p =='a' || *p =='e' || *p =='i' || *p =='u' || *p =='o')
        {
            V_count++;

        }
        else{
            V_count++;
            p++;
        }
    }
    printf(" %d",V_count);
    printf(" %d",C_count);



}