#include<iostream>
#include<vector>
using namespace std;

vector<int> Three_Way_Partitioning(vector<int> &v,int a,int b){
    int start=0;
    int end=v.size()-1;
    for(int i=0;i<=end;){
        // if element is smaller than a
        if(v[i]<a){
            // if the i is equal to start => no swapping
            if(i==start){
                i++;
                start++;
            }
            else{
                swap(v[i],v[start]);
                i++;
                start++;
            }
        }
        // if element is greater than b
        else if(v[i]>b){
            swap(v[i],v[end]);
            end--;
        }
        else{
            i++;
        }
    }
    return v;
}

int main()
{
    /* code */
    vector<int> v={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int a=14;
    int b=20;
    v=Three_Way_Partitioning(v,a,b);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
