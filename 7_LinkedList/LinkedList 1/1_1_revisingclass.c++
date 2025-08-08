// Passing class object to a function is pass by value

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
    cout<<s.name<<endl;
    change(s); // Passing class object by reference (modifies original object)
    cout<<s.name<<endl;
}