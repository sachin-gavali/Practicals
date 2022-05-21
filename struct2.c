#include<stdio.h>
struct Sachin
{
  int age ;
  int marks;

}s1,s2;
int main(){
    struct Sachin s1,s2;
    s1.age= 20;
    s2.age=30;
    s1.marks=50;
    s2.marks=500;
    printf("%d\n ",s1.age);
    printf("%d\n ",s2.age);
    printf("%d\n ",s1.marks);
    printf("%d\n ",s2.marks);


    return 0;
    
    
}