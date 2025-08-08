#include<iostream>
using namespace std;

class player{  
    public:
    int score;  // data member or member funnction --> no memory allocation --> as it is a blueprint 
    int health;  

    void showHealth(){ // member function --> again ye ek blueprint hai actual me exist nhi krta jb object banega phir use me ayega
        cout<<"Health is: "<<health;
    }

    void showScore(){
        cout<<"Score is: "<<score;
    }
};

int main(){

    player gaurav;
    gaurav.score = 100;
    gaurav.health = 69;
    gaurav.showHealth();// normal function name ke thru call hota hai , but ye class ka func hai to object ke thru call hoga 
    gaurav.showScore();

    // player dipu;
    // dipu.score = 80;
    // dipu.health = 76;
    // cout<<dipu.score<<endl;
    // cout<<dipu.health<<endl;

}