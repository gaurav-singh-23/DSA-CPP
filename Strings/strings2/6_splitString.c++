/* Ques  : Given a sentence, split every single 
word of the sentence and print in a new line. */

#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}