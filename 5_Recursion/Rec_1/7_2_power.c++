/* Ques:  Make a function which calculates ‘a’ raised to the power ‘b’ using recursion. */

#include<iostream>
using namespace std;

int power(int a , int b){
    if(b == 0) return 1;
    int ans = a * power(a , b-1);
    return ans;
}
int main(){
    int a , b;
    cin>>a;
    cin>>b;
    cout<<power(a,b);
}