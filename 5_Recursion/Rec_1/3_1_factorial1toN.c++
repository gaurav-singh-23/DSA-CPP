// without recursion --> tc O(n^2)

#include<iostream>
using namespace std;

int factupto(int n){
    for(int j=1;j<=n;j++){
        int f=1;
        for(int i=2;i<=j;i++){
            f *=i;
        }
        cout<<f<<endl;
    }
}
int main(){
    factupto(5);
}