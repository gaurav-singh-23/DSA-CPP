#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // length or size of string
    string str = "gaurav singh is a student";
    cout<<str.length()<<endl; // output --> 25 // 0 to str.length()-1 // int len = str.length() 
    cout<<str.size()<<endl<<endl; // output --> 25

    // push_back
    string strr = "abcd";
    cout<<strr<<endl;
    strr.push_back('e');
    strr.push_back('f');
    strr.push_back('g');
    cout<<strr<<endl<<endl;
    
    // pop_back
    string strrr = "Gaurav";
    cout<<strrr<<endl;
    strrr.pop_back();
    strrr.pop_back();
    strrr.pop_back();
    cout<<strrr<<endl<<endl;

    // concatenation('+' operator --> add string)
    string s = "Gau";
    cout<<s<<endl;
    s = s + "rav"; // add
    cout<<s<<endl<<endl;

    // reverse()
    string s1 = "abcdef"; // 0 1 2 3 4 5
    cout<<s1<<endl;
    reverse(s1.begin(),s1.end());        // 0 --> 5
    cout<<s1<<endl; // output --> fedcba
    // part of string reverse
    reverse(s1.begin()+2,s1.end());      // 0+2 --> 5
    cout<<s1<<endl; // output --> abfedc
    reverse(s1.begin()+2,s1.end()-1);    // 0+2 --> 4
    cout<<s1<<endl; // output --> abedcf
    reverse(s1.begin()+2,s1.begin()+5);  // 0+2 --> 0+5=4 { ek jyada dena hota hai }
    cout<<s1<<endl; // output --> abedcf

}