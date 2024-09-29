#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter the number:";
   int n;
   cin>>n;
   if((n%5==0 || n%3==0) && n%15!=0)
   {
    cout<<"Number is divisible bt 5 or 3 but not 15";
   }
   else
   {
    cout<<"Not matching condition";
   }
}