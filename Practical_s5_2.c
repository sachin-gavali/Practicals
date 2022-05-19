//Sachin Gavali 
// Compare two string 
// Copy String 
#include<stdio.h>
#include<stdlib.h>
int main(){
  char a[25] = " Sachin ";
  char b[]= " Gavali  ";
 char c[100];
 strcpy(c,a);
 puts(c);
   strcmp(a,b);
  printf("%d", strcmp(a,b));
  return 0; 
}