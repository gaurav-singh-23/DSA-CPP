#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> m;
    m[2] = 50;
    m[3] = 30;
    m[1] = 10;
    for(auto p : m){ // for(pair<string,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"--------"<<endl;

    map<string,int> m2;
    m2["Gaurav"] = 50;
    m2["Lokesh"] = 30;
    m2["Harsh"] = 10;
    for(auto p : m2){ // for(pair<string,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    }
    
}