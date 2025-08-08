/*  Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
Input 1: n = 36
Output 1: yes

Input 2: n = 45
Output 2: no    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n = ";
    cin>>n;

    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid == n) {
            cout<<"yes";
            flag = true;
            break;
        }
        else if(mid*mid > n) hi = mid-1;
        else if(mid*mid < n) lo = mid+1;
    }
    if(flag == false) cout<<"no";
}