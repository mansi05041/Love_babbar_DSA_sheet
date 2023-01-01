#include<iostream>
#include<vector>
using namespace std;

vector<int> Rearrange_array(vector<int> arr){

    // shift all negaative values to the end
    int n=arr.size();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        // if the positives are at their correct place
        while (i<=n-1 && arr[i]>=0) i++;

        // if the negatives are at their correct place
        while(j>=0 && arr[j]<0) j--;

        if(i<j) swap(arr[i],arr[j]);
    }
    
    // rearrange the elements
    int k=0;
    while(k<n && i<n){
        swap(arr[k],arr[i]);
        i++;
        k+=2;
    }

    return arr;
}

int main()
{
    /* code */
    vector<int> arr={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    arr= Rearrange_array(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}
