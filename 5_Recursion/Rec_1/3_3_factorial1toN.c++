#include<iostream>
using namespace std;
int factUpto(int n){
    //base case
    if(n==0 || n==1) {
        cout<<1<<endl;
        return 1;
    }
    int r = n*factUpto(n-1); // recursive call
    cout<<r<<endl;
    return r;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    factUpto(n);
}