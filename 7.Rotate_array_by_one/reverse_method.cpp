#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &a,int left,int right){
    while (left<=right)
    {
        /* code */
        swap(a[left],a[right]);
        left++;
        right--;
    }
}

vector<int> rotate(vector<int> a){
    int n=a.size();
    // reverse the whole array
    reverse(a,0,n-1);

    // reverse the array from index 1 to n-1
    reverse(a,1,n-1);
    
    return a;
}

int main()
{
    /* code */
    vector<int> a ={1,2,3,4,5};
    a=rotate(a);
    cout<<"After rotation by one time ::\n ";
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
