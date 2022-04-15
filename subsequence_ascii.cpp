#include <bits/stdc++.h>
using namespace std;

void func_string(string str,int ind,string& ans,int n){
    if(ind>=n){
        cout<<"sequence:  ";
        cout<<ans<<endl;
        return;
    }
    ans+=str[ind];                     // to take the element 
    func_string(str,ind+1,ans,n);
    // ans+=to_string(int(str[ind]));
    // func_string(str,ind+1,ans,n);
    ans.erase(ans.length()-1);         // to remove the element
    func_string(str,ind+1,ans,n);
}
int main(){
    vector<int> a;
    string a2="";
    string str="abc";
    func_string(str,0,a2,str.length());
    return 0;
}