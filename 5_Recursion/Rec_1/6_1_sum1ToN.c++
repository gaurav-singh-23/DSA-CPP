/* Print sum from 1 to n (Parameterised) */

#include<iostream>
using namespace std;

void sum1toN(int sum , int n){
    if(n == 0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum + n , n-1);
}
int main(){
    int n;
    cin>>n;cout<<endl;
    sum1toN(0,n);
}