#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl<<endl; // array ka address actually me array ke first element ke first byte ka address hota hai
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl<<endl;

    //output

    // 0x61fefc  --> 4 byte me se pehli byte ka address uss integer ka address kehlaega
                     // similary for --> int a ; --> integer 4 byte bhale hi occupy krta hai but pehli byte ka address hi uss integer ka address kehlaega

    // 0x61fefc 
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c

    // hexadecimal 0 1 2 3 4 5 6 7 8 9 a b c d e f

    cout<<arr; // c++ me --> cout<<&arr = cout<<arr = cout<<&arr[0]
}