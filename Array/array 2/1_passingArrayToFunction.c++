// Passing array to function --> pass by reference

#include<iostream>
using namespace std;
void display(int a[] , int size){ // void display(int a[] OR int* a) --> here we are recieving the array that's why size is not specified(de to sakte hain but jaroorat nhi hai) 
    // (int* a) ---> a is a pointer pointing to the first element of arr[] ---> here we will not get error because we are receiving base address of array and pointer store address only .
    // int size=sizeof(a)/sizeof(a[0]);  -->  error : sizeof(a) will return the size of the pointer, not the array itself
    // cout<<size<<endl;
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void change(int b[] , int size){ // (int* b) ---> b is a pointer pointing to the first element of arr[] ---> here we will not get error because we are receiving base address of array and pointer store address only .
    b[0]=100;  // updation
}

int main(){
    int arr[]={1,4,2,7,46}; // arr is pointing to first element of an array 
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);  // passing arr means passing base address of arr(arr[0]) or passing address of the array
    change(arr,size);  // usually array ke sath size bhejte ho , vectors ke case me nhi
    display(arr,size); // it is a fault that we can not calculate the size in the function so we need to pass the size of array along with array
}

// nam wam se fark nhi padta a--> arr & b-->arr