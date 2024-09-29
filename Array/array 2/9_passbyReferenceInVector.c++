// by using &
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){ // a koi naya vector nhi hai a bhi v ko point krr rha hai
    a[0]=100;  // a -> 100 10 6 1
    for(int i=0;i<a.size();i++){ // size function is present in vector not in array as it helps when main() is hidden helps us to find the size of vector in other function
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