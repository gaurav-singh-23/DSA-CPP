/* 
          1 2 3
          4 5 6
          7 8 9

          output : 3 2 1 4 5 6 9 8 7

*/


#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter cols of matrix : ";
    cin>>n;

    int a[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    // wave print
    for(int i = 0;i<m;i++){
        if(i%2!=0){
            for(int j = 0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j = n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}