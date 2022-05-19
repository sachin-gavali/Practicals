//Sachin Gavali 
// string copy 
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int len = 0 ;
    printf(" Enter the string ");
    fgets(s,100,stdin);
    printf(" THe string is ");
    len=strlen(s);
    puts(s);
    printf(" The length of  the string is  = %d",len);
    return 0 ; 
    
}