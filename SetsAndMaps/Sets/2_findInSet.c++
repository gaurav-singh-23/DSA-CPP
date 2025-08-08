#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    int target = 40;

    // s.find() --> it searches in the set, and if it is not found then returns the last element
    if(s.find(target)!=s.end()){ // target exist
        cout<<"target exist"<<endl;
    }
    else cout<<"target does not exist"<<endl;

    if(s.find(target)==s.end()){ // target  does not exist
        cout<<"target does not exist";
    }
    else cout<<"target exist";
}