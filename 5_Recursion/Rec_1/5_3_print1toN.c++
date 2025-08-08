//  Print 1 to n (extra parameter)

#include<iostream>
using namespace std;
void print(int i,int n){
    //base case
    if(i>n) return;
    cout<<i<<endl; 
    //recursive call
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}

// #include<iostream>
// using namespace std;

// void print1toN(int i , int n){
//     if(n == 0) return;
//     cout<<i<<endl;
//     i++;
//     print1toN(i,n-1);
// }
// int main(){
//     int n;
//     cin>>n;cout<<endl;
//     print1toN(1,n);
// }