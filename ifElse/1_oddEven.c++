#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :";
    int n;
    cin>>n;
    if(n%2==0){       // == --> comparison operator --> cout<<(n%2==0) --> print 1 or 0
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}