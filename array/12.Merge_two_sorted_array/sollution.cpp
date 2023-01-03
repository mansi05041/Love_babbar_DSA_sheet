#include<iostream>
#include<vector>
using namespace std;
vector<int> Merge_sorted_array(vector<int> nums1, int m, vector<int> nums2, int n){
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[i+j+1]=nums1[i];
            i--;
        }
        else{
            nums1[i+j+1]=nums2[j];
            j--;
        }
    }
    while(j>=0){
        nums1[i+j+1]=nums2[j];
        j--;
    }
    return(nums1);
}

int main()
{
    /* code */
    vector<int> nums1 ={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    nums1=Merge_sorted_array(nums1,3,nums2,3);
    for(auto i: nums1){
        cout<<i<<" ";
    }
    return 0;
}
