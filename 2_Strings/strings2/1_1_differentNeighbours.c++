/* Warmup Problem : Input a string and return the 
number of times the neighbouring characters are 
different from each other. */

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    int n = s.length();
    for(int i = 0;i<n;i++){

        // a (length = 1) ---> output --> 0  {if this condition not given then output --> 1 but it should be 0 because agae-piche koi nhi hai}
        if(n == 1){          
            break;
        }

        // ab (length = 2) ---> output --> 1  {if this condition not given then output --> 2 but it should be 1 because of same pair counted twice}
        if(n == 2){ 
            count++;         
            break;
        }
        
        // (length > 2)
        if(i == 0){
            if(s[i]!=s[i+1]) count++;
        }

        else if(i == n-1){
            if(s[i]!=s[i-1]) count++;
        }

        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
    } 
    cout<<count;
}