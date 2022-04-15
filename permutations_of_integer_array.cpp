#include <bits/stdc++.h>
using namespace std;
int permutations(int arr[],vector<int> t,int ind,int n){
    if(ind>=n){
        cout<<"[ ";
        for(auto v: t){
            cout<<v<<"  ";
        }
        cout<<"]\n";
        return 1;
    }
    int c=0;
    for(int i=0;i<=t.size();i++){
        vector<int> t2=t;
        t.clear();
        for(int j=0;j<i;j++){
            t.push_back(t2[j]);
        }
        t.push_back(arr[ind]);
        for(int j=i;j<t2.size();j++){
            t.push_back(t2[j]);
        }
        c+=permutations(arr,t,ind+1,n);
        t=t2;
    }
    return c;
}
int main(){
    int arr[4]={1,2,3,4};
    vector<int> t;
    int c=permutations(arr,t,0,4);
    cout<<"No. of perms are : "<<c<<endl;
    return 0;
}