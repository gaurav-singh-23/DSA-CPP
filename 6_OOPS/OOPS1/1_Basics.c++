#include<iostream>
using namespace std;

class player{  // user defined datatype
    public:
    int score;   // data members are bind into or encapsulated into player class 
    int health;  // (class ke andar jo bhi variable hai vo data member hai)
};

int main(){
    int a = 23; // a --> variable

    // player gaurav = 17 ---> this is wrong as gaurav is not variable of player datatype --> gaurav --> object

    player gaurav;
    gaurav.score = 100;
    gaurav.health = 69;
    cout<<gaurav.score<<endl;
    cout<<gaurav.health<<endl;

    player dipu;
    dipu.score = 80;
    dipu.health = 76;
    cout<<dipu.score<<endl;
    cout<<dipu.health<<endl;

}