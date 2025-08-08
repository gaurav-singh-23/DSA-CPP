// without recursion

#include<iostream>
using namespace std;

void print1toN(int n){
    int i = 1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
int main(){
    int n;
    cin>>n;cout<<endl;
    print1toN(n);
}