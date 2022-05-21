int sum1;
int a;
int b;

#include<iostream>
using namespace  std;
#define pi 3.14
float redius;
void add();
int sum();
int main ()
{
  
    cout<< " REDIUS TAKA :::";
    cin>>redius;
    cout<<"AREA  OF CIRCLE is ="<<pi*redius*redius;
     add();
     sum();
     
    return 0;
    
}


void add (void)
{
    int x=redius+redius;
    cout<<"Sum of redius \n";
     cout<<x;

}
int sum(int )
{
    cout<<" ENTER THE NUMBER \n";
    cin>>a;
    cout<<" ENTER THE NUMBER \n";
    cin>>b;
    int sum1 =a+b;
    return sum1;
}