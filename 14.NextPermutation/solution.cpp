#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> NextPermutation(vector<int> v){
    int i,j;
    // find the mountain element from the right side
    for(i=v.size()-2;i>=0;i--){
        if(v[i]<v[i+1]) break;
    }

    // if the answer is the greatest value
    if(i<0){
        sort(v.begin(),v.end());
    }

    // find the just greater than mountain element from right side
    else{
        for(j=v.size()-1;j>i;j--){
        if(v[j]>v[i]) break;
        }
    
    // swap the both
    swap(v[i],v[j]);

    // reverse after the i position
    reverse(v.begin()+i+1,v.end());
    }

    return v;
}

int main()
{
    /* code */
    vector<int> vec ={9, 5, 4, 3, 1};
    cout<<"The Next permutation\n";
    vec=NextPermutation(vec);
    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}
