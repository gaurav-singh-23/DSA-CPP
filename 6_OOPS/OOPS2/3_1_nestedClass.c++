#include<iostream>
using namespace std;

class Gun{ // M1 --> pehle class bahar bani hui hai uska object maine class me liye tha
    public:
    int ammo;
    int damage;
    int scope;
};

class Player{
    private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun; // Player ke andar Gun ka ek object

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

    Gun getGun(){
        return gun;
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

    void setGun(Gun gun){
        this->gun = gun;
    }
    
};

// int addScore(Player a, Player b){
//     return a.getScore() + b.getScore();
// }

// Player getMaxScorePlayer(Player a, Player b){
//     if(a.getScore() > b.getScore()) 
//         return a;
//     else 
//         return b;
// }

int main(){
    Player gaurav; 
    Player dipu;
    Player *urvi = new Player; 
    Player urviobject = *urvi; 

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    gaurav.setHealth(20);
    gaurav.setAge(21);
    gaurav.setScore(100);
    gaurav.setisAlive(true);
    gaurav.setGun(akm);

    Gun awm;
    awm.ammo = 20;
    awm.damage = 50;
    awm.scope = 8;

    dipu.setHealth(10);
    dipu.setAge(20);
    dipu.setScore(80);
    dipu.setisAlive(true);
    dipu.setGun(awm);

    // urviobject.setHealth(10);
    // urviobject.setAge(20);
    // (*urvi).setScore(80); 
    // urvi->setisAlive(true);  
    
    // cout<<urviobject.getHealth()<<endl;
    // cout<<(*urvi).getScore()<<endl;
    // cout<<urvi->isAlive();
    // cout<<addScore(gaurav,dipu)<<endl;
    // Player alok = getMaxScorePlayer(gaurav,dipu); 
    // cout<<alok.getScore();

}