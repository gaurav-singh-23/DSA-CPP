/* Print sum from 1 to n (Return Type) */

#include<iostream>
using namespace std;

int sum1ToN(int n){
    if(n == 0) return 0;
    int ans = n + sum1ToN(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;cout<<endl;
    cout<<sum1ToN(n);
}