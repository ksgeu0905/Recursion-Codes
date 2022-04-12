#include <bits/stdc++.h>
using namespace std;

vector<string> func_string(string str,int ind,string& ans,int n){
    if(ind>=n){
        vector<string> p;
        p.push_back(ans);
        return p;
    }
    ans+=str[ind]; // to take the element 
    vector<string> left = func_string(str,ind+1,ans,n);
    ans.erase(ans.length()-1);         // to remove the element
    vector<string> right = func_string(str,ind+1,ans,n);
    left.insert(left.end(),right.begin(),right.end());
    return left;
}
int main(){
    vector<string> a;
    string a2="";
    string str="abc";
    a=func_string(str,0,a2,str.length());
    for(auto value:a){
        cout<<"seq: "<<value<<endl;
    }
    return 0;
}