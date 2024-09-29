#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter the number:";
   int n;
   cin>>n;
   if(n%3==0)
   {
    if(n%5==0)                                           // Nested if else
    {
    cout<<"Number is divisible by 5 and 3 both";
    }
    else
    {
    cout<<"divisible by 3 but not 5";
    }
   } 
   else
   {
       cout<<"Not matching condition"; 
    }
  
}