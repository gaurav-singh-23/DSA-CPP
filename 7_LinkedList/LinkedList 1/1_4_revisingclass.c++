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

void change(Student* s){
    s->name = "dipu"; // (*s).name = "dipu"; -----> s pointer hai iss liye arrow laga paa rhe hain
}

int main(){
    Student s("gaurav",87,80.44);

    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
}