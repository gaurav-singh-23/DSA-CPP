// Method 1 Two Pass 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int> &a)
{
    int no0=0,no1=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==0)
         no0++;
        else 
        no1++;
    }
    cout<<no0<<" "<<no1<<endl;

    // Filling Elements

    // for(int i=0;i<no0;i++)
    // {
    //     a[i]=0;
    // }
    // for(int i=no0;i<a.size();i++)
    // {
    //     a[i]=1;
    // }
    
    for(int i=0;i<a.size();i++){
        if(i<no0) a[i] = 0;
        else a[i]=1;
    }
    
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    int n= v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    sort01(v);

    for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";
    }
}