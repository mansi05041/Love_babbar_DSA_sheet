#include<iostream>
#include<vector>
#include<map>
using namespace std;

int Duplicate_Using_Map(vector<int> a){
    map<int,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second>1) return(it.first);
    }
    return(-1);
}

int main()
{
    /* code */
    vector<int> a ={3,1,3,4,2};
    cout<<"Duplicate value :: "<<Duplicate_Using_Map(a);
    return 0;
}
