// Method 2 One Pass ---> Using Two Pointer i & j
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01Me(vector<int> &v1,vector<int> &v2)
{
    // Its me

    for(int i=0,j=v1.size()-1;i<v1.size();i++,j--)
    {
        if(v1[i]==1){
            v2[j]=1;
        }
        else if(v1[i]==0){
            j++;
        }
    }
}

void sort01Sir(vector<int> &v1)
{
    // Sir

    int n=v1.size();
    int i = 0;
    int j = n-1;
    // while(i<j){
    //     if(v1[i]==0) i++;
    //     if(v1[j]==1) j--;
    //     if(i>j) break;
    //     if(v1[i]==1 && v1[j]==0)
    //     {
    //         v1[i]=0;
    //         v1[j]=1;
    //         i++;
    //         j--;
    //     }
    // }

    //  while(i<j){
    //     if(v1[i]==1 && v1[j]==0)
    //     {
    //         v1[i]=0;
    //         v1[j]=1;
    //         i++;
    //         j--;
    //     }
    //     if(v1[i]==0) i++;  // try karo while loop me ++ and -- last me ho 
    //     if(v1[j]==1) j--;
        
    // }

    // while(i<j){
    //     if(v1[i]==0) i++;
    //     else if(v1[j]==1) j--;
    //     else if(v1[i]==1 && v1[j]==0)
    //     {
    //         v1[i]=0;
    //         v1[j]=1;
    //         i++;
    //         j--;
    //     }
    // }

     while(i<j){
        if(v1[i]==0) i++;
        if(v1[j]==1) j--;
        else if(v1[i]==1 && v1[j]==0)
        {
            v1[i]=0;
            v1[j]=1;
            i++;
            j--;
        }
    }


}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    //v1.push_back(1);

    int n= v1.size();
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> v2(v1.size(),0);

    sort01Me(v1,v2);

    cout<<"Me:"<<endl;

    for(int i=0;i<n;i++)
     {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    sort01Sir(v1);

    cout<<"Sir:"<<endl;

    for(int i=0;i<n;i++)
     {
        cout<<v1[i]<<" ";
    }



}