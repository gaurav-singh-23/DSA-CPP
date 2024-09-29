#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   cout<<"Enter the third number:";
   cin>>c;
   if(a>b)
   {
    if(a>c)                                         
    {
    cout<<a<<" is greatest";
    }
    else
    {
    cout<<c<<" is greatest";
    }
   } 
   else
   {
    if(b>c){
       cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
   } 
  
}