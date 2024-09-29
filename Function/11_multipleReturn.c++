// A function may contain morethan one return statement (but only one hit at a time)
// Each return statement i a function may return different value

#include<iostream>
using namespace std;
int maxthree(int a,int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<maxthree(a,b,c);
}