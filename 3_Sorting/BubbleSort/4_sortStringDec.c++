// Ques ---> Sort a String in decreasing order of values associated after removal of values smaller than X.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s = "AXYDXZURYXZOWZTRXAZKKY";
    string str = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'X'){ // only single inverted comma
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;

    // sort(str.begin(),str.end()); // --->  valid for char's
    // reverse(str.begin(),str.end());

    // --> using bubble sort 
    for(int i = 0;i<str.size()-1;i++){
        bool flag = true;
        for(int j = 0;j<str.size()-1-i;j++){
            if(str[j]<str[j+1]){ // ---> compares char asccii value to evaluate
                int temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    cout<<str;
}