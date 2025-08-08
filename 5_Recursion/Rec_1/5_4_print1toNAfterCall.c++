// After recursive call

#include<iostream>
using namespace std;
void print1toN(int x){
    //base case
    if(x==0) return;
    print1toN(x-1);
    cout<<x<<endl; 
}
int main(){
    int n;
    cin>>n;cout<<endl;
    print1toN(n);
}