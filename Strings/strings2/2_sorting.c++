// Sorting of Strings are done on the basis of ASSCII values

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s<<endl<<endl;

    // ASSCII value of space(' ') --> 32
    char ch = ' ';
    cout<<(int)ch;
}