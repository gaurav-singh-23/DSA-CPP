#include<iostream>
using namespace std;

class Node{ // Linked List Node
public:
    int val;
    Node* next;
    Node(int val){  // parameterized constructor
        this->val = val;
        this->next = NULL;
    }    
};

int main(){
    // 10 20 30 40 50
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    cout<<a.next<<endl; // address->0
    // forming LL
    a.next = &b;
    b.next = &c;
    c.next = &d;

    cout<<(*(a.next)).val<<endl;//--> a.next me address hai b ka to derefrencing operator(*) use krlo value print karane ke liye OR [ a.next->val ] // ---> *(a.next) --> basically mujhe b mil gya

    cout<<b.next->val<<endl; // b ke next ki value

    //print karani hai d ki val
    //(*(*(*(a.next).next)).next).val
    cout<<(*(*(*(a.next)).next).next).val<<endl;

    cout<<(((a.next)->next)->next)->val<<endl;

    // sarri value print karani hai

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next); // temp = b c d
    }
}