#include <bits/stdc++.h>
using namespace std;
void remove_occur(string &str,char ch,int ind,int n){
    if(ind>=n || (ind+1)>n)
        return;
    if(ch==str[ind]){
        str.erase(ind,1);
        remove_occur(str,ch,ind,n-1);
    }
    else{
        remove_occur(str,ch,ind+1,n);
    }
}
int main(){
    string str;
    char letter;
    cin>>str;
    cin>>letter;
    remove_occur(str,letter,0,str.length());
    cout<<str<<endl;
    return 0;
}