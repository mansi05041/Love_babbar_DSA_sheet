#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> getUnion(map<int,int> m){
    vector<int> u;
    for(auto const& i:m){
        u.push_back(i.first);
    }
    return u;
}

vector<int> getIntersection(map<int,int> m){
    vector<int> i;
    for(auto const& j:m){
        if(j.second>1) i.push_back(j.first);
    }
    return i;
}

int main()
{
    /* code */
    vector<int> a={3,4,5,6,7,8};
    vector<int> b={4,5,9,10,13};

    // store the values in map
    map<int,int> mp;
    for(auto i:a) mp[i]++;
    for(auto j:b) mp[j]++;

    vector<int> u,i;
    u= getUnion(mp);
    i= getIntersection(mp);

    // union
    cout<<"Union : ";
    for(auto i:u){
        cout<<i<<" ";
    }

     // intersection
    cout<<"\nIntersection : ";
    for(auto j:i){
        cout<<j<<" ";
    }

    return 0;
}
