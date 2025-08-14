#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> st){ 
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

void pushAtIndex(stack<int>& st,int idx,int val){
    stack<int> helper;
    while(st.size()>idx){
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
    pushAtIndex(st,2,70);
    display(st);
}