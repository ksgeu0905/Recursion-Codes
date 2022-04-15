#include <bits/stdc++.h>
using namespace std;
void permutations(string &str,string ans,int ind){
    if(ind>=str.length()){
        cout<<ans<<endl;
        return;
    }
    
        for(int i=0;i<=ans.length();i++){
            string t=ans;
            ans=ans.substr(0,i)+str[ind]+ans.substr(i);
            permutations(str,ans,ind+1);
            ans=t;
        }
    
}
int main(){
    string str,ans="";
    str="abcd";
    permutations(str,ans,0);
    
    return 0;
}