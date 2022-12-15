#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &v,int left,int right){
    int temp = v[right]; 
    int i=left; // keep track of pivotIndex
    for(int j=left;j<right;j++){
        if(v[j]<=temp){
            swap(v[i],v[j]);
            i++;
        }
    }
    swap(v[i],v[right]);
    return i;
}

int Ksmallest(vector<int> &v,int left, int right,int k){
    // if k is smaller than the number of elements
    if(k>0 && k<=right-left+1 ){
        // partition to get pivotIndex
        int pivotIndex = partition(v,left,right);

        // if position is same as k
        if(pivotIndex-left==k-1) return v[pivotIndex];

        // if position is more then shift to left
        if(pivotIndex-left>k-1) return Ksmallest(v,left,pivotIndex-1,k);

        // else shift ot right
        return(v,pivotIndex+1,right,k-pivotIndex+left-1);
    }
}

int main()
{
    /* code */
    vector<int> vec={10,4,5,6,8,11,3};
    int k=3; // find 3rd smallest element
    cout<<"Kth smallest element is "<<vec[Ksmallest(vec,0,vec.size()-1,k)];
    return 0;
}
