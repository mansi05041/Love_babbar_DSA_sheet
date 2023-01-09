#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int Distribution(vector<int> v,int m){
    sort(v.begin(),v.end());
    int diff=INT_MAX;
    for(int i=0;i<v.size()-m;i++){
        if(v[i+m-1]-v[i]<diff) diff=v[i+m-1]-v[i];
    }
    return diff;
}

int main()
{
    vector<int> v {3, 4, 1, 9, 56, 7, 9, 12};
    int m=5;
    cout<<"difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum :: "<<Distribution(v,m);
    return 0;
}
