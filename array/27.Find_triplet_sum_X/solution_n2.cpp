#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool _isTriplet(vector<int> v, int X){
    // sort the array 
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int j=i+1;
        int k=v.size()-1;
        while (j<k)
        {
            if(v[i]+v[j]+v[k]<X) j++;
            else if(v[i]+v[j]+v[k]>X) k--;
            else return true;
        }
    }
    return true;
}

int main()
{
    /* code */
    vector<int> v={1, 4, 45, 6, 10, 8};
    int X =6;
    if(_isTriplet(v,X)) cout<<"Triplet found!!";
    else cout<<"Triplet not found";
    return 0;
}
