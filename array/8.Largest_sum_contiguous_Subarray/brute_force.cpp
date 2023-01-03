#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSumSubArray(vector<int> v){
    int maxsum = INT_MIN;
    int cursum = 0;
    int n= v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cursum+=v[j];
            maxsum=max(maxsum,cursum);
        }
        cursum=0;
    }
    return(maxsum);
}

int main()
{
    /* code */
    vector<int> a ={1,2,3,-2,5};
    cout<<"Largest Sum of Contiguous Subarray :: "<<MaxSumSubArray(a);
    return 0;
}
