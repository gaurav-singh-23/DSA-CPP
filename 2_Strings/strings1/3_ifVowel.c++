/* Ques  : Input a string of length n and count all 
the vowels in the given string. */ 

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Gaurav Singh"; // To input a string of length n (fixed length) we can use character array
    int count = 0; 
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
}