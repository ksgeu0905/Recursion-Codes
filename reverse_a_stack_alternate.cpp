#include <bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int> &s,int x){
    if(s.size()==0)
        s.push(x);
    else{
        int z=s.top();
        s.pop();
        insert_at_bottom(s ,x);
        s.push(z);
    }
}
void reverse(stack<int> &s){
    if(s.empty())
        return;
    else{
        int x=s.top();
        s.pop();
        reverse(s);

        insert_at_bottom(s,x);
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    return 0;
}