/* Make a function which calculates the factorial of n using recursion. */
// factorial of n = 1 to n no. ka product

#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0 || n==1) return 1;
    return n*fact(n-1); // recursive call
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<fact(n);
}