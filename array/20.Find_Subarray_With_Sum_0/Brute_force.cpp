#include<iostream>
#include<vector>
using namespace std;

bool Subarray(vector<int> v){
    for(int i=0;i<v.size();i++){
        int curSum=v[i];
        if(curSum==0) return true;
        for(int j=i+1;j<v.size();j++){
            curSum+=v[j];
            if(curSum==0) return true;
        }
    }
    return false;
}

int main()
{
    /* code */
    vector<int> v={4,2,-3,1,6};
    if(Subarray(v)) cout<<"Yes present";
    else cout<<"Not present";
    return 0;
}
