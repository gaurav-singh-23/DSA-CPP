// Ques ---> 

// Importance of bubble sort(stable sort) --> It is a swapping algorithm

#include<iostream>
using namespace std;

int main(){
    int arr[9] = {5,0,1,3,0,4,0,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int  i = 0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0;i<n-1;i++){
        bool flag = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j] == 0){ // only condition is different
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;   
    }

    for(int  i = 0 ;i<n-1;i++){
        cout<<arr[i]<<" ";
    }

}