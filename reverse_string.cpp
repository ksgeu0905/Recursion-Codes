#include <bits/stdc++.h>
using namespace std;
void reverse(string &str,int s,int e){
    if(s>e)
        return;
    swap(str[s],str[e]);
    reverse(str,s+1,e-1);
}
int main(){
    string str;
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<str;
    return 0;
}