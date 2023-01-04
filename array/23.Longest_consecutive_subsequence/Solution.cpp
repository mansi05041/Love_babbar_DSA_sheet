#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int Longest_Subsequence(vector<int> v){
    // use set to hash all elements
    set<int> s;
    for(auto i: v) s.insert(i);
    int len=INT_MIN;
    // check the possible sequence
    for(auto i: v){
        if(s.find(i-1)==s.end()){
            int j=i;
            while (s.find(j)!=s.end()) j++;
            // update the length
            len=max(len,j-i);
        }
    }
    return len;
}

int main()
{
    /* code */
    vector<int> v={2,6,1,9,4,5,3};
    cout<<"Length of Longest Subsequence "<<Longest_Subsequence(v);
    return 0;
}
