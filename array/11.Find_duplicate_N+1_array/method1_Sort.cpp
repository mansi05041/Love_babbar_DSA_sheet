#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Duplicate_value_sort(vector<int> a){
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]) return(a[i]);
    }
    return(-1);
}

int main()
{
    /* code */
    vector<int> a ={3,1,3,4,2};
    cout<<"Duplicate value :: "<<Duplicate_value_sort(a);
    return 0;
}
