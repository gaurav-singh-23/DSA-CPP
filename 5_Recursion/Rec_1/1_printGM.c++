/* Print Good Morning N no. of times */ 
// Function calling itself

#include <iostream>
using namespace std;

void printGM(int n){
    if(n == 0) return;
    cout<<"Good Morning"<<endl;
    printGM(n-1);
}
int main(){
    int n;
    cin>>n;
    printGM(n);
}