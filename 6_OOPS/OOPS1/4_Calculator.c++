#include<iostream>
using namespace std;

class Calculator{
    public:
    int a;
    int b;

    void add(){ // member function easily data member ko access krr lete hain kyu ki ye class(ghar) ke hi log hai inhe kya hi fark padta hai public private se 
        cout<<a+b<<endl;
    }

    void substract(){
        cout<<a-b<<endl;
    }
};

int main(){
    Calculator calci ;
    calci.a =  10;
    calci.b = 7;
    calci.add();
    calci.substract();
}