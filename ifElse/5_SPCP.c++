// If cost price and selling price of an item is input through the keyboard, write a program to  determine whether the seller has made profit or  incurred loss. Also determine how much profit he  made or loss he incurred.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the selling price:";
    int SP;
    cin>>SP;
    cout<<"Enter the cost price:";
    int CP;
    cin>>CP;
    if(SP>CP){
        cout<<"Profit is : "<<SP-CP;
    }
    if(CP>SP){  
        cout<<"Loss is : "<<CP-SP;
    }
    if(SP==CP){
        cout<<"No Profit,No Loss";
    }
    return 0;
}