#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,1,4,3,5,6,4,7,8,9,34,55,35,6};
    int size = sizeof(arr)/sizeof(arr[0]);  // 60/4 = 15
    cout<<size<<endl<<endl; // length of array

    cout<<"sizeof(arr): "<<sizeof(arr)<<endl; // 15 x 4 = 60
    cout<<"sizeof(arr[5]): "<<sizeof(arr[5]); // integer size = 4 byte
}
  