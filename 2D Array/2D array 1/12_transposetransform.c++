/* Ques : You are given a matrix/2D-Array of size (nxn).
Change this matrix into its transpose */
               /*OR*/
/* Ques : Write a program to change the given matrix 
with its transpose. */     

#include<iostream>
using namespace std;
int main(){
    int m; // m -> rows
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n; // n -> cols
    cout<<"Enter the no. of cols : ";
    cin>>n;
    int arr[m][m];
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    // print matrix
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for(int i = 0;i<m;i++){
        for(int j = i+1;j<n;j++){
            // swapping i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // printing matrix
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}