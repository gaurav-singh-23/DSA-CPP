#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int item;
    cout<<"Enter the item to be searched:";
    cin>>item;
    // search

    // check mark --> so that bar bar present & not present na print ho
    bool flag = false; // false -> element not present (assume)
    for(int i=0;i<=n-1;i++){
        if(arr[i]==item){
            flag =true;
            // break; --> to exit the loop when element found , what is need to do iteration till n ?
            // count+=1; --> can be used to count the # of repetition of item in array
        }
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";
}