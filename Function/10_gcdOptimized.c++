// Recursion me optimized tareeke se karenge
#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter first no.";
    cin>>a;
    cout<<"Enter second no.";
    cin>>b;
    cout<<gcd(a,b);
}