#include<iostream>
#include<vector>
using namespace std;

class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main(){
    Cricketer Virat;
    Virat.name = 'V';
    Virat.age = 36;
    Virat.noOfTestMatches = 100;
    Virat.averageScore = 45;

    Cricketer Dhoni;
    Dhoni.name = 'D';
    Dhoni.age = 43;
    Dhoni.noOfTestMatches = 80;
    Dhoni.averageScore = 36;

    Cricketer cricketers[2] = {Virat,Dhoni};
    for(int i = 0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTestMatches<<endl;
        cout<<cricketers[i].averageScore<<endl;
    }

//     vector<Cricketer> cricketers;
//     cricketers.push_back(Virat);
//     cricketers.push_back(Dhoni);
//     for(int i = 2;i<20;i++){
//         Cricketer *cricketer = new Cricketer;  -------> // dynamic way
//         cricketer -> name = ; ------> // cin>> krke lelo input
//         cricketer -> age = ;
//         cricketer -> noOfTestMatches = ;
//         cricketer -> averageScore = ;
        
//         cricketers.push_back(*cricketer);
//    }

    }
