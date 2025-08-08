#include<iostream>
using namespace std;

class Book{
    public:
    char name;
    int price;
    int noOfpages;

    int countBooks(int p){
        if(price < p) return 1;
        else return 0;
    }

    bool isBookPresent(char book){
        if(name == book) return true;
        else return false;
    }
};

int main(){
    Book HarryPotter;
    HarryPotter.name = 'G';
    HarryPotter.price = 1000;
    HarryPotter.noOfpages = 555;

    cout<<HarryPotter.countBooks(800)<<endl;
    cout<<HarryPotter.isBookPresent('G')<<endl;



}