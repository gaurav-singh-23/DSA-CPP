#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the integer:";
    int n;
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{   // n<=0
        cout<<-n;
    }
    return 0;
}

