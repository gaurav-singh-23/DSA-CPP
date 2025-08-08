#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    // m1
    pair<string,int> p1;
    p1.first = "raghav";
    p1.second = 76;
    pair<string,int> p2;
    p2.first = "harsh";
    p2.second = 49;
    pair<string,int> p3;
    p3.first = "lokesh";
    p3.second = 56;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    // m2
    m["Gaurav"] = 17;
    m["Dipu"] = 7;

    for(auto p : m){ // for(pair<string,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();

    m.erase("raghav");
    cout<<endl;

    for(auto p : m){ // for(pair<string,int> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    if(m.count("raghav")) cout<<"Target Exist."; // if(m.find("raghav")!=m.end())
    else cout<<"Target does not exist.";

    cout<<endl<<m["Gaurav"];
}