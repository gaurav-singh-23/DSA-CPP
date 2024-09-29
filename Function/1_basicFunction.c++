#include<iostream>
using namespace std;
void greeting(){
    cout<<"Good Morning"<<endl;
    cout<<"Having a nice day"<<endl;
}
void print_star(int x)  // x nam ka dabba banega aur har bar func implement hone ke badd destroy ho zaega
{
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl; 
    }


}
int main() // 1)sabse pehle ye hi main func call hota hai 2) aur ek bar hi call hota hai
{
    greeting(); //function calling
    greeting();
    greeting();
    cout<<endl<<endl;
    print_star(3);
    print_star(4);
    print_star(5);
}