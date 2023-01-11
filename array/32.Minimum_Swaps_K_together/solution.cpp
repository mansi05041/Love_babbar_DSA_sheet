#include<iostream>
#include<vector>
using namespace std;

int minSwaps(vector<int> v,int k){
    // count the elements that are smaller or equal to k
    int count=0;
    for(auto i:v){
        if(i<=k) count++;
    }
    // find the elements that are greater than k within count range
    int i=0;
    int unwanted =0;
    while(i<count){
        if(v[i++]>k) ++unwanted;
    }
    // find the minimum swaps using two pointer approach
    int ans= unwanted;
    int j=count;
    while (j<v.size())
    {
        if(v[i++]>k) --unwanted;
        if(v[j++]>k) ++unwanted;
        ans=min(ans,unwanted);
    }
    return ans;
}

int main()
{
    /* code */
    vector<int> v={2, 7, 9, 5, 8, 7, 4};
    int k=6;
    cout<<minSwaps(v,k);
    return 0;
}
