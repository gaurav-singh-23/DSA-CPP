// default values of Arguements

#include<iostream>
using namespace std;
void fun(int x=7,int y=8) // default values of x and y // agar default values de rhe ho to sabko do warna --> error
{
    cout<<x<<" "<<y;
}
void fun2(int x=4,float y=3.1)
{
    cout<<x<<" "<<y;
}
void fun3(int x=4,float y=3.1,bool z=true)
{
    cout<<x<<" "<<y<<" "<<z;
}
int main(){
    fun(); // error if default values are not given to function // output --> 7 8
    cout<<endl;
    fun(4,6); // output --> 4 6 because 7 and 8 are default values 
    cout<<endl;
    fun(4); // output--> 4 8 as one argument passed so priority wise , x will get more priority
    cout<<endl;

    fun2();
    cout<<endl;
    fun2(5);
    cout<<endl;
    fun2(6.7);  // (int)6.7=6 automatically , float pass kiye to int me typecast ho gya
    cout<<endl;
    fun2(1,2);  // integer pass kiye to vo float me typecast nhi HUA
    cout<<endl;

    fun3(false);
}