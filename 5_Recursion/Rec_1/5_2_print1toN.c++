// without recursion

#include<iostream>
using namespace std;

void print1toN(int i , int n){
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
int main(){
    int n;
    cin>>n;cout<<endl;
    print1toN(1,n);
}