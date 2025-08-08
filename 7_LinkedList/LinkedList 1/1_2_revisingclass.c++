#include<iostream>
using namespace std;

class Student{
public:    
    string name;
    int rno;
    float marks;

    Student(string name,int rno,float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};

void change(Student &s){
    s.name = "dipu";
}

int main(){
    Student s("gaurav",87,80.44);
    // cout<<s.name<<endl;
    // change(s); 
    // cout<<s.name<<endl;

    int x = 8;
    int* p = &x;
    cout<<*p<<endl; // output ----> 8
    cout<<p<<endl; /// output -----> address
    *p = 11;
    cout<<x; // output ------> 11
}