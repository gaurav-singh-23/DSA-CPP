// Method 1 Two Pass 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void lol(vector<int> &v)
{
    // Its Me

    // for(int i=0,j=v.size()-1;i<v.size() && i<j;i++,j--){
    //     if(v[i]>0 && v[j]<0){
    //         int temp=v[i];
    //         v[i]=v[j];
    //         v[j]=temp;
    //     }
    //     if(v[i]>0 && v[j]>0){
    //         i--;
    //     }
    //     if(v[i]<0 && v[j]<0){
    //         j++;
    //     }
    //     if(v[i]<0 && v[j]>0)
    //     continue;
    // }

    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        if(v[i]>0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
            }
        if(v[i]>0 && v[j]>0){
            j--;
            }  
        if(v[i]<0 && v[j]<0){
            i++;
            }
        if(v[i]<0 && v[j]>0){
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    // v.push_back(1);
    // v.push_back(1);

    int n= v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    lol(v);

    for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";
    }

}