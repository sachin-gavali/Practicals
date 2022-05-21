// leap year 
// sachin gavali
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf(" ENTER THE YEAR\n");
    scanf(" %d",&year);
    if(year%400==0){
        printf("\nLEAP YEAR ");

    }
    else if(year%4==0){
        printf("LEAP YEAR\n");
    }
    else{
        printf("\n No leap year");
    }
}