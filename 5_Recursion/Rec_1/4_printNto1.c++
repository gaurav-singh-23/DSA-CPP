#include<iostream>
using namespace std;
void printNto1(int x){
    //base case
    if(x==0) return;
    cout<<x<<endl; // kam
    //recursive call
    printNto1(x-1);
}
int main(){
    int n;
    cin>>n;
    printNto1(n);
}