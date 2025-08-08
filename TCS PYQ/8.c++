/* Question 8

Given a string S (input consisting) of * and #. The length of the string is variable. The task is to find the minimum number of * or # to make it a valid string. The string is considered valid if the number of * and # are equal. The * and # can be at any position in the string.

Note: The output will be a positive or negative integer based on the number of * and # in the input string.

(* > #) → positive integer

(# > *) → negative integer

(# = *) → 0

Example 1:

Input:
###*** → Value of S

Output:
0 → number of * and # are equal */

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int countStar = 0;
    int countHash = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '*') countStar++;
        else if(s[i] == '#') countHash++;
    }

    cout<<countStar - countHash;
}