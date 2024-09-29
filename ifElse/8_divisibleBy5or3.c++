#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n%3==0 || n%5==0 )            //  if(n%15==0)
    {
        cout<<"The number is divisible by 3 or 5";
    }
    else
    {
        cout<<" The number is not divisible by 3 and it is not divisible by by 5";
    }
}