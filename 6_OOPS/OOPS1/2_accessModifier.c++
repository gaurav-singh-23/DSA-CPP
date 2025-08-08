// Data Abstraction --> jo cheez hame dikhani hai hum wahi dikhayenge, jo public ko nhi dikhani vo chupa lenge

#include<iostream>
using namespace std;

class player{  // user defined datatype
    public:
    int score;
    private:
    int health;
};

int main(){

    player gaurav;
    gaurav.score = 100;
    // gaurav.health = 69; -> error -> private data member -> cant be accessed outside the class
    cout<<gaurav.score<<endl;
    // cout<<gaurav.health<<endl;

    player dipu;
    dipu.score = 80;
    // dipu.health = 76;
    cout<<dipu.score<<endl;
    // cout<<dipu.health<<endl;

}