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
    // store the transpose
    int t[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
    // printing transpose matrix
    for(int i = 0;i<n;i++){ 
        for(int j = 0;j<m;j++){ 
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}