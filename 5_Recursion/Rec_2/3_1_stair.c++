// Stair path (Either one step or 2 step and their combinations)

#include<iostream>
using namespace std;

int stair(int n){
    if(n == 2) return 2;
    if(n == 1) return 1;
    return stair(n-1) + stair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}