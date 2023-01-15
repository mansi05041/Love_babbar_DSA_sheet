#include<iostream>
#include<vector>
#include<climits>
using namespace std;

double FindMedian(vector<int> nums1,vector<int> nums2){
    int n1=nums1.size();
    int n2=nums2.size();
    // n1 should be less in size
    if(n1>n2) return(FindMedian(nums2,nums1));
    int total=n1+n2;
    int half=(total+1)/2;
    // applying binary search in nums1
    int low=0;
    int high=n1;
    while (low<=high)
    {
        int cut1=low+(high-low)/2; // cut1 is for nums1
        int cut2=half-cut1; // cut2 is for nums2
        int left1= cut1==0? INT_MIN : nums1[cut1-1];
        int right1= cut1==n1? INT_MAX: nums1[cut1];
        int left2= cut2==0? INT_MIN: nums2[cut2-1];
        int right2= cut2==n2? INT_MAX: nums2[cut2]; 
        if(left1>right2 && left2<=right1) high=cut1-1;
        else if(left1<=right2 && left2>right1) low=cut1+1;
        else{
            if(total%2==0) return((max(left1,left2)+min(right1,right2))/2.0);
            else return(max(left1,left2));
        }
    }
    return 0.0;
}

int main()
{
    /* code */
    vector<int> nums1={15,23,56,78,99};
    vector<int> nums2={11,23,90,101,222,345,450};
    cout<<"Median :: "<<FindMedian(nums1,nums2);
    return 0;
}
