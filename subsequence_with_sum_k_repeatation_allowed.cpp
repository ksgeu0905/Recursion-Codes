//COMBINATION SUM
#include <bits/stdc++.h>
using namespace std;
 void find_sum(vector<int>& candidates, vector<vector<int>> &ans,int idx, int target,vector<int> &a){
        if(idx>=candidates.size()){
            if(target==0){
                ans.push_back(a);
            }
            return;
        }
        if(target>=candidates[idx]){
            a.push_back(candidates[idx]);
            find_sum(candidates,ans,idx,target-candidates[idx],a);
            a.pop_back();

        }
        find_sum(candidates,ans,idx+1,target,a);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        find_sum(candidates,ans,0,target,a);
        return ans;
}
int main(){
    vector<int> a={2,3,6,7};
    int target=7;
    vector<vector<int>> ans;
    ans=combinationSum(a,target);
    for(auto value:ans){
        for(auto value2: value)
            cout<<value2<<" ";
        cout<<"\n";
    }
    return 0;
}