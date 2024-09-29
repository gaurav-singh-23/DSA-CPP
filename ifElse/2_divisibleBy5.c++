#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    }
    return 0;
}