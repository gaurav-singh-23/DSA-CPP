// This method can be also used in array means c program
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
}
void reverse(vector<int> &v){
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);
    
    // reverse

    // while loop
    // int i = 0;
    // int j = v.size()-1;
    // while(i<=j){
    //     // swap v[i] and v[j]
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    
    // for loop
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

    // reverse function in vector
    //reverse(v.begin(),v.end());

    reverse(v);
   
    display(v);
    
}