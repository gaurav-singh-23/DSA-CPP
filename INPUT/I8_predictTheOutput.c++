#include<iostream>
using namespace std;
int main()
{
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<<(p == q == r); // compiler operate left to right agar same operators ho
    // cout<<endl;
    // cout<<((p)==(q==r));
    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r); // (p==q)==(r) --> (0)==2 --> 0
    cout<<endl;
    cout<<((p)==(q==r)); // --> (1)==(2==2) --> (1)==(1) --> 1
}