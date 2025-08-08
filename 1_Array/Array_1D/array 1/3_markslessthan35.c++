/* Ques: Given an array of marks of students, if the 
mark of any student is less than 35 print its roll 
number. [roll number here refers to the index of the 
array.]*/

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. of students :";
    int n;
    cin>>n;
    int marks[n];

    //input
    cout<<"Enter the marks of student :";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    
    //output
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}