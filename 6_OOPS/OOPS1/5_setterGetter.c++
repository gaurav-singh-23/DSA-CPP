// OOPS kehta hai ki class ke data member ko private rakho aur memeber function ko public due to security cocern

// Agar data member public hai to koi bhi set krr sakta hai easily , member function ke thru bhi krr sakta hai par use function call krna padega aur hum function ko track krr sakte hain (cout<<score set kiya ja rha hai--> alarm)

#include<iostream>
using namespace std;

class player{ 
    private:
    int score;  
    int health; 

    public:
      // setter
    void setScore(int s){
        score = s;
    }

    void setHealth(int h){
        health = h;
    }

      // getter
    int getScore(){
        return score;
    } 
    
    int getHealth(){
        return health;
    }
};

int main(){

    player gaurav;
    gaurav.setScore(10);
    gaurav.setHealth(50);
    cout<<gaurav.getScore()<<endl;
    cout<<gaurav.getHealth();
    
}