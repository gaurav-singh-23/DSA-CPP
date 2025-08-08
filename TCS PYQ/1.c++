/*Question 1

A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array of N number of integer values. The task is to find the empty packets (0) of chocolate and push it to the end of the conveyor belt (array).

Example 1:
N = 8 and arr = [4, 5, 0, 1, 9, 0, 5, 0]
There are 3 empty packets in the given set. These 3 empty packets represented as 0 should be pushed towards the end of the array.

Input:
8 – Value of N
[4, 5, 0, 1, 9, 0, 5, 0] – Element of arr[0] to arr[N-1]. While input each element is separated by newline

Output:
4 5 1 9 5 0 0 0 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            v[count] = v[i];
            count++;
        } 
    }
    for(int i=count+1;i<n;i++){
        v[i] = 0;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}