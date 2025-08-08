// Vectors are passed by value . Each time you pass, new vector is created
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){ // a ke andar v ko copy kiye hain // a --> 9 10 6 1 // means a ek naya vector hai
    a[0]=100;  // a -> 100 10 6 1
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}