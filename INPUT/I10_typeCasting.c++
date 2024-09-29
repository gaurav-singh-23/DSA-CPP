// Each character has an ASCII value
// 'A' -->65   'a' --> 97  '0' --> 48
//  :           :           :
//  :           :           :
// 'z' -->90   'z' -->122  '9' --> 57
#include<iostream>
using namespace std;
int main()
{
  char ch='A';
  cout<<(int)ch;  // type casting
  cout<<endl<<endl;

//   float x=7.1;
//   int y=x;
//   cout<<y; --> 7

   float x=7.1;
   int y;
   y = (int)x;
   cout<<y;
   cout<<endl<<endl;

   bool a = true;
   cout<<a+9;   // technically apne aap inter conversion kar rha hai(true=1)
   cout<<endl<<endl;
   // or

//    bool a = true;
//    int y=(int)x;    // karne ki jaroorat nhi hai // but  technically shi hai
   
   char chh='a';
   cout<<chh+100;  // automatically type conversion
   cout<<(int)chh+100; // but technically aise likhna shi hota hai
   
}