/* Ques : Write a program to print sum of all the 
elements of a 2D matrix. */

#include<iostream>
#include<climits>
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
    // sum
    int sum = 0;
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){ 
            sum += arr[i][j];
        }
    }
    cout<<"Sum : "<<sum;
} 
