#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter cols of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"enter cols of 2nd matrix : ";
    cin>>q;
    
    if(n==p){

        // 1st matrix
        int a[m][n]; 
        cout<<"enter elemets of 1st matrix : ";
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin>>a[i][j];
            }
        }

        // 2nd matrix
        int b[p][q]; 
        cout<<"enter elemets of 2nd matrix : ";
        for(int i = 0;i<p;i++){
            for(int j = 0;j<q;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        
        // resultant matrix
        int res[m][q]; 
        for(int i = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                res[i][j] = 0;
                for(int k = 0;k<p;k++){
                //  res[i][j] = a[i][0]*b[0][j] +  a[i][1]*b[1][j] + ...... +  a[i][p-1]*b[p-1][j]
                    res[i][j] += a[i][k]*b[k][j]; // i and j constant k is varying .
                }
            }
        }
        // print res
        for(int i = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{ // n!=p
        cout<<"The matrices cannot be multiplied.";
    }
}