#include<iostream>
using namespace std;
int a=9; // Global variable can be accessed every where in a program
void fun(int x,int y) // here x and y are formal parameters
{
    cout<<"address of fun x "<<&x<<endl;    
    cout<<"address of fun y "<<&y<<endl; 
}
void f(){
    cout<<a;
}
int main()
{
    int x=3;    // declare hote hi dabba ban jata hai initialize krne ki zaroorat nhi
    int y=7;    // Local variable can only be accessed inside the function in which it is declared
    cout<<"address of main x "<<&x<<endl;    
    cout<<"address of main y "<<&y<<endl; 
    fun(x,y); // fun(3,7)  // here x or 3 and y or 7 are actual parameters

    cout<<a<<endl;
    //int a=2; // local variable has more priority than global variable, pehle compiler check karega main() me a declare hai ya nhi
    //cout<<a<<endl;
    f();
    cout<<endl;
    a=7; // humne global wala a change krr diya
    cout<<a<<endl;
    f();

}

// memory me four alag alag dabbe bane hain

// int i;
// for(i=0;i<n;i++){}
// i is global for for loop block of code