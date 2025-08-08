//Linear Search
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i<n;i++){
        // M1
        // if(arr[i+1]!=arr[i]+1){
        //     cout<<arr[i]+1;
        //     break;
        // }

        // M2
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
}