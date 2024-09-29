#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the integer:";
    int n;
    cin>>n;
    if(n<0){
        n=-n;
    }
    cout<<n;
    return 0;
}