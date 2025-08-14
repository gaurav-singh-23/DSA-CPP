// using 2 extra stack
#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> st){
     // we will use extra space
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" "; // top to bottom
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" "; // bottom to top
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);
    //by using 2 extra stack
    stack<int> temp1;
    stack<int> temp2;
    //empty st into temp1
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }
    //empty temp1 into temp2
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    //empty temp2 into st
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    cout<<endl<<endl;
    display(st);
}