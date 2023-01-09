#include<iostream>
#include<vector>
using namespace std;

int Trap_Water(vector<int> v){
    int trap_water=0;
    vector<int> left_max(v.size());
    vector<int> right_max(v.size());
    // left max array
    left_max[0]=v[0];
    for(int i=1;i<v.size();i++) left_max[i]=max(v[i],left_max[i-1]);
    // right max array
    right_max[v.size()-1]=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--) right_max[i]=max(v[i],right_max[i+1]);
    // find the trap rain water
    for(int i=1;i<v.size()-1;i++) trap_water+=min(left_max[i],right_max[i])-v[i];
    return trap_water;
}

int main()
{
    /* code */
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"Trap Rain water obtained :: "<<Trap_Water(v);
    return 0;
}
