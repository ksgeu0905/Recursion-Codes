#include <bits/stdc++.h>
using namespace std;
void remove_occur(string &str,string word,int ind,int n){
    if(ind>=n || (ind+word.length())>n)
        return;
    if(word==str.substr(ind,word.length())){
        str.erase(ind,word.length());
        remove_occur(str,word,ind,n-word.length());
    }
    else{
        remove_occur(str,word,ind+1,n);
    }
}
int main(){
    string str,word;
    cin>>str;
    cin>>word;
    remove_occur(str,word,0,str.length());
    cout<<str<<endl;
    return 0;
}