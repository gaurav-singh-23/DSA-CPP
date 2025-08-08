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
    void setHealth(int health){
        this->health = health; 
    } 
    
    void setScore(int score){
        this->score = score;
    } 

    void setAge(int age){
        this->age = age;
    } 

    void setisAlive(bool alive){
        this->alive = alive;
    } 
    
};

int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore()) 
        return a;
    else 
        return b;
}

int main(){
    Player gaurav; // compile time , static allocation(stack memory me allocation hua hai)
    Player dipu;
    Player *urvi = new Player; // run time allocation , dynamic allocation(heap memory me allocation hua hai) // pointer to obj
    Player urviobject = *urvi; // new object ko urviobject me store kara liye

    gaurav.setHealth(20);
    gaurav.setAge(21);
    gaurav.setScore(100);
    gaurav.setisAlive(true);

    dipu.setHealth(10);
    dipu.setAge(20);
    dipu.setScore(80);
    dipu.setisAlive(true);

    urviobject.setHealth(10);
    urviobject.setAge(20); // M1
    (*urvi).setScore(80); // aise bhi karr sakte hain  M2
    urvi->setisAlive(true); // M3 -> arrorw hame address se object nikal ke deta hai 
    
    cout<<urviobject.getHealth()<<endl;
    cout<<(*urvi).getScore()<<endl;
    cout<<urvi->isAlive();
    // cout<<addScore(gaurav,dipu)<<endl;
    // Player alok = getMaxScorePlayer(gaurav,dipu); 
    // cout<<alok.getScore();

}