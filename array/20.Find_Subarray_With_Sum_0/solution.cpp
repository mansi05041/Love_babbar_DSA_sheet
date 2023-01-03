#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool Subarray(vector<int> v){
   set<int> s;
   // store the prefix sums
   int curSum=0;
   for(auto i: v){
    curSum+=i;
    if(curSum==0 || s.find(curSum)!=s.end()) return true;
    s.insert(curSum);
   }
   return false;
}

int main()
{
    /* code */
    vector<int> v={4,2,-3,1,6};
    if(Subarray(v)) cout<<"Yes present";
    else cout<<"Not present";
    return 0;
}
