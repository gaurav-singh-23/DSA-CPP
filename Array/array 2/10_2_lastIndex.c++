// Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No. of elements :";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<endl;
    
    int x;
    cout<<"enter x : ";
    cin>>x;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--) // Searching from last reduces time complexity --> makes it time efficient // backward loop 
    {
        if(v[i]==x)
        {
            idx=i;
            break; 
        }
    }
    cout<<"index : "<<idx;

}