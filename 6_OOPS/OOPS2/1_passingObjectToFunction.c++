#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int score;
    int age;
    bool alive;

    public:
      // getter
    int getHealth(){
        return health;
    } 
    
    int getScore(){
        return score;
    } 

    int getAge(){
        return age;
    } 

    int isAlive(){
        return alive;
    } 

      // setter
    int setHealth(int health){
        // Player::health = health; --> indicates player ka health --> M1
        this->health = health;   // --> M2
    } 
    
    int setScore(int score){
        this->score = score;
    } 

    int setAge(int age){
        this->age = age;
    } 

    int setisAlive(bool alive){
        this->alive = alive;
    } 
    
};

int addScore(Player a, Player b){//though Player is a user defined datatype but it is a datatype so we can pass Player to function 
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){  // and also return type can be Player like other datatype (void , int , float)
    if(a.getScore() > b.getScore()) 
        return a;
    else 
        return b;
}

int main(){
    Player gaurav; //object creation,statically --> gaurav object me required memory allocate ho gyi 
    Player dipu;

    gaurav.setHealth(20);
    gaurav.setAge(21);
    gaurav.setScore(100);
    gaurav.setisAlive(true);

    dipu.setHealth(10);
    dipu.setAge(20);
    dipu.setScore(80);
    dipu.setisAlive(true);
    
    cout<<addScore(gaurav,dipu)<<endl;
    // cout<<getMaxScorePlayer(gaurav,dipu); --> invalid --> ye ek object return karr rha hai usko directly print nhi krwa sakte
    Player alok = getMaxScorePlayer(gaurav,dipu); // ek naye object me store kara lenge
    cout<<alok.getScore();

}