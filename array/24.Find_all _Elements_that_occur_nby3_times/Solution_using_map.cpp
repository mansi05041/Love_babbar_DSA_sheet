#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

vector<int> MajorityElement(vector<int> v){
    unordered_map<int,int> mp;
    for(auto i: v) mp[i]++; // store the frequency
    vector<int> ans;
    int n=v.size();
    for(auto it: mp){
        if(it.second>n/3) ans.push_back(it.first);
    }
    return(ans);
}

int main()
{
    /* code */
    vector<int> v={3,2,3};
    vector<int> ans=MajorityElement(v);
    for(auto i: ans) cout<<i<<" ";
    return 0;
}
