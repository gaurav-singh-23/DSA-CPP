#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int* ptr = &arr[0]; // = arr // giving address  // giving address of first element to ptr means -> giving pura array to ptr
    cout<<ptr<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl<<endl;

    // Method 1
    ptr[0] = 8;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";  // i[ptr]
    }
    cout<<endl<<endl;
    // iisse hume kya pata chalta hai agar hum pointer ko array ka address de de to iss pointer ke pass puri chamata hai array ko istemal krne ka 

    //Method 2
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;  // int ke case me hum 4 step age jate hain , char & bool me 1 step age jate hain
    }
    ptr = arr; // pointer ptr ko hum kho(lost) krr rhe hain that's why again making it to point to arr // ptr is pointing to 1st element

    *ptr = 9; // ptr[0] = 9
    ptr++; // ptr is pointing to 2nd element
    *ptr = 10;  // ptr[1] = 10
    ptr--; // ptr is pointing to 1st element
    cout<<endl<<endl;

    // Method 3
     for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";  // i[arr]
    }
    cout<<endl<<endl;


}

// ptr pointer have access to entire array
// technically array name arr points to the first element of an array

// In previous slide we can write : int a[] --> int* a  &&&  int b[] --> int* b