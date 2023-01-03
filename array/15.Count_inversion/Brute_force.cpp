#include<iostream>
#include<vector>
using namespace std;

int Count_inversions(vector<int> v){
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(i<j && v[i]>v[j]) count++;
        }
    }
    return count;   
}

int main()
{
    /* code */
    vector<int> v ={2,4,1,3,5};
    cout<<"Total number of count inversions : "<<Count_inversions(v);
    return 0;
}
