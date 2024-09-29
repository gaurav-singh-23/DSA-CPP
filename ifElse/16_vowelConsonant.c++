#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character:";
    cin >> ch;
    int ascii=int(ch);
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122)
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            cout<<"The alphabet is a vowel";
        }
        else{
            cout<<"The alphabet is a consonant";
        }
    }
    else{
        cout<<"The character is not an alphabet";
    }
}    