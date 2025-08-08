#include<iostream>
using namespace std;
int main()
{   
    // array declaration 1 and initialization
    int arr[5] = {2, 4, 6, 8, 1}; // 5 integer ke dabbe(memory/storage space) ban(create) chuke hain
                                  // syntax and declaration
                                  /* index {2,4,6,8,1}
                                            0 1 2 3 4    */

    //int arr[];   --> error 
    int ar[] = {2, 4, 6, 8, 1}; // jab hum size mention nhi kar rhe hai to ussi wakt elements dene padenge 

    // array declaration 2 
    int size = 10, arrr[size];
    cout<<arr[3]<<endl;   // fetching values
    cout<<arr[10]<<endl<<endl; // output is garbage value / index out of bound error
    
    // updation 
    arr[3] = 100;    // new array --> {2,4,6,100,1}        
    cout<<arr[3]<<endl<<endl;

    // float values/element in array
    float arr_f[5]= {2.1,4.5,6,7.2,8.1};
    cout<<arr_f[2]<<endl;   // output --> 6.000000
    cout<<arr_f[4]<<endl<<endl;

    // character element in array
    char arr_c[5]={'a','s','%','A'};
    cout<<arr_c[4]<<endl;   // ye to kuch bhi nhi print ho rha hai
    cout<<arr_c[3]<<endl;
    cout<<arr_c[6]<<endl;     // output is garbage value / index out of bound error
    
    return 0;
}