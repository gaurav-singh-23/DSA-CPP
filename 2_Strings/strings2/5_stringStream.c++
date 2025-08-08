#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is a maths teacher";
    stringstream ss(str); // ss is a stream which contains str
    string temp;

    while(ss>>temp){ // stream me se temp me input le rhe hain
        cout<<temp<<endl;  // pehle temp mera raghav banega --> phir is --> a --> maths --> teacher
    }
}