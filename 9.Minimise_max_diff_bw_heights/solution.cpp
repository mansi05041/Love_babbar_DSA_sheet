#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimizeHeight(vector<int> a,int k){
    // sort the array
    sort(a.begin(),a.end());

    // store the maximum possible height difference
    int diff= a[a.size()-1]-a[0];
    int tempmin=a[0];
    int tempmax=a[a.size()-1];

    for(int i=1;i<a.size()-1;i++){
        // on subtracting height with k, obtain a negative result
        if(a[i]-k<0) continue;

        // find the minimum tower height
        tempmin=min(a[0]+k,a[i]-k);

        // find the maximum tower height
        tempmax=max(a[a.size()-1]-k,a[i-1]+k);

        // update the minimum difference
        diff=min(diff,tempmax-tempmin);
    }
    return diff;
}

int main()
{
    /* code */
    vector<int> a={1,15,10};
    int k=6;
    cout<<minimizeHeight(a,k);
    return 0;
}
