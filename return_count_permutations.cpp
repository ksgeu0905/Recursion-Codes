#include <bits/stdc++.h>
using namespace std;
int permutations(string &str,string ans,int ind){
    if(ind>=str.length()){
        cout<<ans<<endl;
        return 1;
    }
    int c=0;
    for(int i=0;i<=ans.length();i++){
        string t=ans;
        ans=ans.substr(0,i)+str[ind]+ans.substr(i);
        c+=permutations(str,ans,ind+1);
        ans=t;
    }
    return c;
    
}
int main(){
    string str,ans="";
    str="abcd";
    int c=permutations(str,ans,0);
    cout<<"No. of perms are : "<<c<<endl;
    return 0;
}