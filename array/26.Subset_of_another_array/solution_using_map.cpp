#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

string IsSubset(vector<int> v1,vector<int> v2){
    map<int,int> m;
    // hash all the elements of vector v1
    for(auto i:v1) m[i]++;
    // check it is subset or not
    for(auto i:v2){
        if(!m[i]) return("No");
        m[i]--; // decrement the value
    }
    return("Yes");
}

int main()
{
    /* code */
    vector<int> v1={11, 1, 13, 21, 3, 7};
    vector<int> v2={11, 3, 7, 1};
    cout<<IsSubset(v1,v2);
    return 0;
}
