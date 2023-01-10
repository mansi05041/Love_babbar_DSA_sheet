#include<iostream>
#include<vector>
using namespace std;

int Length_subarray_sum_greater_than_X(vector<int> arr,int X){
    int n=arr.size();
    int min_len=n+1;
    int start=0;
    int end=0;
    int curSum=0;
    while(end<n){
        // add the elements to the curSum till it becomes greater than X
        while (curSum<=X && end<n)
        {
            curSum+=arr[end];
            end++;
        }
        // now we get the subarray, now find the smallest one
        while(curSum>X && start<n){
            // update the minimum length of subarray
            if(min_len>end-start) min_len=end-start;
            // remove the elements from start to get the smallest subarray
            curSum-=arr[start];
            start++;
        }
    }
    return(min_len);
}

int main()
{
    /* code */
    vector<int> v={1, 4, 45, 6, 0, 19};
    int X = 51;
    cout<<"The Length of smallest subarray with sum greater than X is "<<Length_subarray_sum_greater_than_X(v,X);  
    return 0;
}
