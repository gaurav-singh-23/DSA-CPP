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

    int minc = 0;
    int maxc = n-1;
    int minr = 0;
    int maxr = m-1;

    int tne = m*n;
    int count = 0;

    while(minr<=maxr && minc<=maxc){
        // Right
        for(int j = minc;j<=maxc && count<tne;j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        // Down
        for(int i = minr;i<=maxr && count<tne;i++){
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // Left
        for(int j = maxc;j>=minc && count<tne;j--){
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // Up
        for(int i = maxr;i>=minr && count<tne;i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}