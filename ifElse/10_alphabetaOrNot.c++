// Ques : Write a program to check whether a  character is an alphabet or not.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the character:";
    char ch;
    cin>>ch;
    int ascii=int(ch);
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122) // heirchy of operators --> && > ||
    {
        cout<<"The character is an alphabet";
    }
    else
    {
        cout<<"The character is not an alphabet";
    }
}