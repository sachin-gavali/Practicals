// sachin gavali
// surface of area of couboid

#include<stdio.h>
#include<conio.h>
int main(){
    int l, w ,h;
    printf(" ENTER THE NUMBER \n");
    scanf(" %d",&l);
    printf(" ENTER THE NUMBER \n");
    scanf(" %d",&w);
    printf(" ENTER THE NUMBER \n");
    scanf(" %d",&h);
    int volumn = l*w*h;
    printf(" The volume is = %d", volumn);
    int SA= 2*l*w +2*w*h +2*h*l;
    printf(" the surface area is = %d",SA);
    return 0;

}