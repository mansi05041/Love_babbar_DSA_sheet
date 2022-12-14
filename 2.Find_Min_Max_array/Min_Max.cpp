#include<iostream>
#include<vector>
using namespace std;

vector<int> Min_Max(vector<int> &a){

    // if only one element is present in array
    if(a.size()==1) return{a[0],a[0]};

    int min_val,max_val;
    min_val=min(a[0],a[1]);
    max_val=max(a[0],a[1]);
    for(int i=2;i<a.size();i++){
        if(a[i]<min_val) min_val=a[i];
        if(a[i]>max_val) max_val=a[i];
    }
    return{min_val,max_val};
}

int main()
{
    /* code */
    vector<int> arr={23,56,90,-3,5,10,2};
    arr=Min_Max(arr);
    cout<<"Minimum value :"<<arr[0];
    cout<<"\nMaximum value :"<<arr[1];
    return 0;
}
