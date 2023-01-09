#include<iostream>
#include<vector>
using namespace std;

int Trap_Water(vector<int> v){
    int trap_water=0;
    for(int i=0;i<v.size();i++){
        int left_max=0;
        int right_max=0;
        // search the left max
        for(int j=i;j>=0;j--) left_max=max(left_max,v[j]);
        // search the right max
        for(int j=i;j<v.size();j++) right_max=max(right_max,v[j]);
        trap_water+=min(left_max,right_max)-v[i];
    }
    return trap_water;
}

int main()
{
    /* code */
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"Trap Rain water obtained :: "<<Trap_Water(v);
    return 0;
}
