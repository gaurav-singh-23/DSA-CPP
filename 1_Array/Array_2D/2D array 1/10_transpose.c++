#include<iostream>
using namespace std;
int main(){
    int m; // m -> rows
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n; // n -> cols
    cout<<"Enter the no. of cols : ";
    cin>>n;
    int arr[m][n];
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    // print --> row wise printing
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // printing transpose --> column wise printing
    for(int j = 0;j<n;j++){ 
        for(int i = 0;i<m;i++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}