#include<iostream>
#include<vector>
using namespace std;

int MergeOperation(vector<int> arr){
    int i=0;
    int j=arr.size()-1;
    int merge=0;
    while (i<=j)
    {
        if(arr[i]<arr[j]){
            i++;
            arr[i]=arr[i]+arr[i-1];
            merge++;
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]=arr[j]+arr[j+1];
            merge++;
        }
        else{
            i++;
            j--;
        }
    }
    return merge;
}

int main()
{
    /* code */
    vector<int> v={26,5,7,26};
    cout<<MergeOperation(v);
    return 0;
}
