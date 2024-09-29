#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n%3==0 && n%5==0 )            //  if(n%15==0)
    {
        cout<<"divisible by 3 and 5";
    }
    else
    {
        cout<<"Not divisible by 3 and 5";
    }
}