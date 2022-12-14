#include<iostream>
#include<vector>
using namespace std;

vector<int> Reverse_array(vector<int> &a){
    int start =0;
    int end =a.size()-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    return(a);
}

int main()
{
    /* code */
    vector<int> arr={1,3,24,7,8,9};
    cout<<"reverse array : ";
    arr=Reverse_array(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}
