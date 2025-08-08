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

    cout<<s.size()<<endl; // display size

    for(int ele : s){ // print set
        cout<<ele<<" ";
    }
    cout<<endl;

    s.erase(2); // erase

    for(int ele : s){
        cout<<ele<<" ";
    }
}