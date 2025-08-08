#include<iostream>
using namespace std;

class Student{
public:    
    string name;
    int rno;
    float marks;

    Student(string name,int rno,float marks){
        this->name = name; // (*this).name = name; ----------> dono same hai (arrow derefrencing darshata hai)
        this->rno = rno;
        this->marks = marks;
    }
};

void change(Student &s){
    s.name = "dipu";
}

int main(){
    Student s("gaurav",87,80.44);
    Student* ptr = &s;

    cout<<s.name<<endl;
    (*ptr).name = "dipu";  // ptr->name = "dipu";
    cout<<s.name<<endl;
}