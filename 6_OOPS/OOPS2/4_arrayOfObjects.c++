#include<iostream>
using namespace std;

class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};

class Player{

    private:
    class Helmet{ // M2 --> class inside class --> mai chahata nhi hu ki Helmet koi aur bhi access kare
        int hp;
        int level;

        public:
          //setter
          void setHp(int hp){
            this->hp = hp;
          }

          void setLevel(int level){
            this->level = level;
          }
          //getter
          int getHp(){
            return hp;
          }

          int getLevel(){
            return level;
          }
    };


    private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun; // array of objects ---> Gun gun[2]; ---> kisi ke pass 2 gun bhi to ho sakti hai
    Helmet helmet; // Helmet ka ek object
    
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

    // Helmet getHelmet(){
    //     return helmet;  // this->helmet; --> but is {} me helmet nhi hai to obvious hai bahar dhoonega
    // } -----> Helmet class private hai

    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
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

    void setHelmet(int level){  // Helmet ko set(properties set) krne ke liye kuch logic bhi dall diya hai
        Helmet *helmet = new Helmet; // new object --> dynamic memory allocation
        helmet->setLevel(level);
        int health = 0;
        if(level == 1)
            health = 25;
        else if(level == 2)
            health = 50;
        else if(level == 3)
            health = 100;
        else 
            cout<<"INVALID Level";
        helmet->setHp(health);
        this->helmet = *helmet; // Helmet class ka jo helmet(object) hai upar usme jake set ho jaega new object ki properties
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
    gaurav.setHelmet(2);

    Gun awm;
    awm.ammo = 20;
    awm.damage = 150;
    awm.scope = 8;

    dipu.setHealth(10);
    dipu.setAge(20);
    dipu.setScore(80);
    dipu.setisAlive(true);
    dipu.setGun(awm);
    dipu.setHelmet(3);

    Gun gun123 = gaurav.getGun(); // akm
    cout<<gun123.ammo<<endl;
    cout<<gun123.damage<<endl;
    cout<<gun123.scope<<endl;

    dipu.getHelmet();
    gaurav.getHelmet();

    Player players[3] = {gaurav,dipu,*urvi,};
    cout<<players[0].getAge();
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