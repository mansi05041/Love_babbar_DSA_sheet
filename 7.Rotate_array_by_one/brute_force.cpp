#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> a){
    if(a.size()==2){
        swap(a[0],a[1]);
        return a;
    }
    int temp=a[a.size()-1];
    for(int i=a.size()-2;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=temp;
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
