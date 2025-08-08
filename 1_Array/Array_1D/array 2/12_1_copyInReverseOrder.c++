#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter The no. of element :";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    
    vector<int> v2;  // (v1.size()) --> not able to use as it means size=v1.size() , elements = 0 so now i should use only vector[i]
    for(int i=0;i<v1.size();i++)
    {
        for(int j=v1.size()-1;j>=0;j--)
        {
            v2.push_back(v1[j]);
        }
    }
    cout<<"Reversed array : ";
    for(int i=0;i<v1.size();i++){
        cout<<v2[i]<<" ";
    }
    
}