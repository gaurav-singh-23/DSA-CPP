// iterative soln

#include<iostream>
using namespace std;

void fib(int n){
    if(n == 1 || n == 2) cout<<1;
    int a = 1 , b = 1;
    int sum = 0;
    for(int i=3;i<=n;i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    fib(n);
}