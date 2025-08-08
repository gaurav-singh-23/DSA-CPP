#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" "; // 10 20 30 40  // (temp->val : is address pe jo val pada hai use utha ke lao)
        temp = temp->next; // (temp->next : is address pe jo next pada hai use temp me daldo)
    }

    cout<<endl<<endl;

    cout<<a->next->next->next->val;
}