#include <bits/stdc++.h>
using namespace std;
void func_array(int arr[],int ind,vector<int>& ans,int n,int k){
    if(ind>=n){
        if(accumulate(ans.begin(),ans.end(),0)==k){
            cout<<"sequence:  ";
            for(auto value:ans){
                
                cout<<value<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[ind]); // to take the element 
    func_array(arr,ind+1,ans,n,k);
    ans.pop_back();         // to remove the element
    func_array(arr,ind+1,ans,n,k);
}

int main(){
    vector<int> a;
    vector<char> a2;
    int arr[]={3,1,2,5,4,2,4,8,1,3,5,0};
    func_array(arr,0,a,12,4);
    return 0;
}