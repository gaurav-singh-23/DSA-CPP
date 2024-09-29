#include<iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"Enter 1st number:";
   cin>>x; // input dene ke badd jo hum enter dabate hain vo automatically next line me le ayega.
   cout<<"Enter 2nd number:";
   cin>>y;
   int sum=x+y;
   cout<<"Sum of the numbers:";
   cout<<sum<<endl<<endl; // cout<<x+y

   // ya phir basically vo kabhi next line me tha hi nhi
   int a,b;
   cin>>a;
   cin>>b;
   // 23 space/enter 45
   cout<<a+b;
}