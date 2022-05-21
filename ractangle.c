// find the area of rantangle 
// find the perimeter of rantangle 
// sachin gavali
#include<stdio.h>
#include<conio.h>
int main(){
    int l,w;
    printf(" \nENTER THE NUMBER\n");
    scanf("%d",&l);
    printf(" \nENTER THE NUMBER\n");
    scanf("%d",&w);
    int area = l*w;
    printf(" \n THE AREA IS %d= \n",area);
    int p = 2*(l+w);
    printf("\n THE PERIMETR IS = %d",p);
    return 0;
    

}