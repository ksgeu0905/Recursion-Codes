#include <bits/stdc++.h>
using namespace std;
void reverse(stack<int> &st,stack<int> &s){
    if(st.empty())
        return;
    s.push(st.top());
    st.pop();
    reverse(st,s);
}
int main(){
    stack<int> st,s;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st,s);
    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    return 0;
}