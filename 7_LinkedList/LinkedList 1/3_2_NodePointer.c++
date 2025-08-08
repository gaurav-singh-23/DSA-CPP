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

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){ // head!=NULL
        cout<<temp->val<<" "; // head->val
        temp = temp->next;  // head->next
    }
}

void displayRec(Node* head){
    if(head == NULL) return; // base case
    cout<<head->val<<" "; // kam
    displayRec(head->next); // call
}

void reverseDisplay(Node* head){
    if(head == NULL) return;
    reverseDisplay(head->next);
    cout<<head->val<<" ";
}

void insertAtEnd(Node* head,int val){
    Node* t = new Node(val);
    while(head->next!=NULL){
        head = head->next;
    }
    head->next = t;
}

void size(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        //count++;
        temp = temp->next;
        count++;
    }
    cout<<"Size:"<<count;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    display(a); // 10 20 30 40
    cout<<endl;
    size(a);
    cout<<endl;
    displayRec(a);
    cout<<endl;
    reverseDisplay(a); // in reverse order using recursion
    cout<<endl;
    insertAtEnd(a,80);
    display(a); 
}