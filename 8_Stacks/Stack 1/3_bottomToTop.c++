// bottom to top printing of elements without loosing elements in stack
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(40);
    st.push(50);

    // we will use extra space
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
}