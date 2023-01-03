#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> Common_in_three_sorted_array(vector<int> A, vector<int> B, vector<int> C){
    unordered_map<int,int> mp;
    vector<int> res;

    // storing first array's element frequency
    for(auto i: A){
        if(!mp[i]) mp[i]++;
    }

    // storing second array's element frequency
    for(auto j: B){
        if(mp[j]==1) mp[j]++;
    }

    // storing third array's element frequency
    for(auto k: C){
        if(mp[k]==2) mp[k]++;
    }

    // push the result into array
    for(auto m: mp){
        if(m.second>=3) res.push_back(m.first);
    }

    return(res);
}

int main()
{
    /* code */
    vector<int> A={1, 5, 10, 20, 40, 80,80};
    vector<int> B={6, 7, 20, 80, 100,100,100};
    vector<int> C={3, 4, 15, 20, 20, 30, 70, 80, 120};
    vector<int> ans = Common_in_three_sorted_array(A,B,C);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}
