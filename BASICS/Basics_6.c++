// Float Data type

#include<iostream>
using namespace std;
int main()
{
    float x=5;
    float y=2;
    cout<<x/y<<endl<<endl;
    // cout<<5/2<<endl;     -->2
    // cout<<5.0/2.0<<endl; -->2.5
    // cout<<5.0/2<<endl;   -->2.5  
    // cout<<5/2.0<<endl;   -->2.5
    
    // float aur int me jo bhi operation ho answer float me hi ayega
    cout<<5+3.14<<endl<<endl;
    
    // Interview
    float z=5.0;
    cout<<z<<endl;
    cout<<5<<endl;
    cout<<5.0<<endl;
    cout<<5.00<<endl<<endl;

    // Arthimetic operations on float data type
    float a=5;
    float b=2;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;

    // int aur int me jo bhi operation hoga uska o/p int me hoga bhale hi vo as a float ho 
    float d;
    d=2/7;
    cout<<endl<<d; // d=0 , 0 is as float
    return 0;
}
