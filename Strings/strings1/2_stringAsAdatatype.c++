#include<iostream>
#include<string>
using namespace std;
int main()
{
    // DOUBLE QUOTES KE ANDAR KUCH BHI HAI --> VO STRING HAI
    string str = "Gaurav Singh"; // 13 size ka character array
    cout<<str<<endl;
    cout<<str[0]<<endl<<endl;

    // input string
    string s;

    // cin>>s; // only if the given string has no spaces
    // cout<<s;

    getline(cin,s); // VVIMP
    cout<<s;






}