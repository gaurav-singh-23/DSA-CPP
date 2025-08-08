/* 
          1 2 3
          4 5 6
          7 8 9

          output : 1 4 7 8 5 2 3 6 9 --> column wise printing

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
    for(int j = 0;j<n;j++){
        if(j%2==0){
            for(int i = 0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i = m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}