#include <bits/stdc++.h>
using namespace std;
void permutations(string &str,string ans,int ind,vector<string> &p){
    if(ind>=str.length()){
        p.push_back(ans);
        return;
    }
    else{
        for(int i=0;i<=ans.length();i++){
            string t=ans;
            ans=ans.substr(0,i)+str[ind]+ans.substr(i);
            permutations(str,ans,ind+1,p);
            ans=t;
        }
    }
}
int main(){
    string str,ans="";
    str="abcd";
    vector<string> per;
    permutations(str,ans,0,per);
    for(auto value :per){
        cout<<value<<endl;
    }
    return 0;
}