#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){   
        cout<<i<<":";
        cout<<factorial(i)<<endl; // Nested for loop se bhi kar sAKTE HAIN
    }

}