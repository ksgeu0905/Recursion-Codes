#include <bits/stdc++.h>
using namespace std;
void func_array(int arr[],int ind,vector<int>& ans,int n){
    if(ind>=n){
        cout<<"sequence:  ";
        for(auto value:ans){
            cout<<value<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]); // to take the element 
    func_array(arr,ind+1,ans,n);
    ans.pop_back();         // to remove the element
    func_array(arr,ind+1,ans,n);
}
void func_string(string str,int ind,string& ans,int n){
    if(ind>=n){
        cout<<"sequence:  ";
        cout<<ans<<endl;
        return;
    }
    ans+=str[ind]; // to take the element 
    func_string(str,ind+1,ans,n);
    ans.erase(ans.length()-1);         // to remove the element
    func_string(str,ind+1,ans,n);
}
int main(){
    vector<int> a;
    string a2="";
    int arr[3]={3,1,2};
    func_array(arr,0,a,3);

    cout<<"\n\n\n";
    string str="abcd";
    func_string(str,0,a2,str.length());
    return 0;
}