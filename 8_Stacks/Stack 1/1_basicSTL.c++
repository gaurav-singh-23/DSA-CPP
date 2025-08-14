#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    cout<<st.size()<<endl;;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(40);
    st.push(50);
    //printing in reverse order -> top to bottom -> by emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    //sare elements stack se gayab -> we need to figure out so we dont loose the elements -> O(n) extra space-> soln

    cout<<endl<<endl;
    // we will use extra space
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
}