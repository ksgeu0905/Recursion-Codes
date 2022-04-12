#include <bits/stdc++.h>
using namespace std;
int func_array(int arr[],int ind,vector<int>& ans,int n,int k){
    if(ind==n){
        if(accumulate(ans.begin(),ans.end(),0)==k){
            return 1;
        }
        else
            return 0;
    }
    ans.push_back(arr[ind]); // to take the element 
    int l=func_array(arr,ind+1,ans,n,k);
    ans.pop_back();         // to remove the element
    int r=func_array(arr,ind+1,ans,n,k);
    return l+r;
}

int main(){
    vector<int> a;
    int arr[]={3,1,2};
    int k=3;
    int ans=func_array(arr,0,a,3,k);
    cout<<"No. of subsequence with sum equals to "<<k<<" are "<<ans;
    return 0;
}