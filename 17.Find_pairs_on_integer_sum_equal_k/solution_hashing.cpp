#include<iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;

int Get_Pairs_count(vector<int> nums,int k){
    unordered_map<int,int> mp;
    int count=0;
    for(auto i: nums){
        if(mp[k-i]) count+=mp[k-i];
        mp[i]++;
    }
    return count;
}


int main()
{
    /* code */
    vector<int> nums ={1, 5, 7, -1};
    int K = 6;
    cout<<"Total pairs :: "<<Get_Pairs_count(nums,K);
    return 0;
}
