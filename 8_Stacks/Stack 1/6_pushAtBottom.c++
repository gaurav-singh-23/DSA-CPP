#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> st){ // no changes happening in this function so not necessary to send st with &
    stack<int> temp;
    while(st.size()>0){
        //cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtBottom(stack<int>& st,int val){ // check kya hume changes krne hain stack me agre karne hai to & bhejo
    stack<int> helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
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
    cout<<endl<<endl;
    pushAtBottom(st,70);
    display(st);
}