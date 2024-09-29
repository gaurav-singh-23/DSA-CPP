#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no. of rows:";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        int curr=1;
        for(int j=0;j<=i;j++)
        {
            cout<<curr<<" ";
            int next=curr*(i-j)/(j+1);
            curr=next;
        }
        cout<<endl;
    }

}