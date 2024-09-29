/* Example : Take two integers a and b : a>b, and find the 
remainder when a is divided by b. */  

// dividend = divisor*quotient + remaider -->>a=b*q+r
// r=a-b*q

#include<iostream>
using namespace std;
int main()
{
    int a=14; // dividend
    int b=3;  // divisor
    int q=a/b; // quotient
    int r;    // remainder
    // a = (b*q) + r
    r = a-(b*q);
    cout<<r<<endl<<endl;

    // Modulus Operator
    cout<<a%b<<endl<<endl;
    
    // Interesting Properties
    cout<<99%4<<endl<<endl;  // if a>b --> rem

    cout<<4%4<<endl<<endl;    // if a=b --> rem=0

    cout<<2%4<<endl<<endl;    // if a<b --> rem=a

    cout<<99%(-4)<<endl<<endl; // -->a%(-b)=a%b : rem=3

    cout<<-99%4<<endl<<endl; // --> (-a)%b=-(a%b) : rem=-3  ---> concept:heiarchy of operators(BODMAS)



}