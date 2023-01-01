#include<iostream>
#include<vector>
using namespace std;

int Get_Pairs_count(vector<int> nums,int k){
    int count=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==k) count++;
        }
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
