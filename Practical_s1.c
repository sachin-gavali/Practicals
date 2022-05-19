// Sachin gavali 
// MAximum numvber using micro 
#include<stdio.h>
#define Max(x,y)  ((x>y)? x:y)
int main(){
    int a , b , max;
    printf(" Enter a numbe4r ");
    scanf("%d",&a);
    scanf("%d",&b);
    max = Max(a,b);
    printf("The Maximum number is = %d",max);
    return 0;

}