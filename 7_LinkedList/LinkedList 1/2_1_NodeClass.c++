#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;    
};

int main(){
    // 10 20 30 40 50
    Node a;
    a.val = 10;
    Node b;
    b.val = 10;
    Node c;
    c.val = 10;
    Node d;
    d.val = 10;

    // forming LL
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
}