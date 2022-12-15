#include<iostream>
#include<vector>
using namespace std;

vector<int> Sort_array(vector<int> v){
    int zero_ptr=0;
    int one_ptr=0;
    int two_ptr=v.size()-1;
    while(one_ptr<=two_ptr){
        if(v[one_ptr]==0){
            swap(v[one_ptr],v[zero_ptr]);
            one_ptr++;
            zero_ptr++;
        }
        else if(v[one_ptr]==2){
            swap(v[one_ptr],v[two_ptr]);
            two_ptr--;
        }
        else{
            one_ptr++;
        }
    }
    return v;
}

int main()
{
    /* code */
    vector<int> vec={2,1,2,0,0,1,2};
    cout<<"Sorted array  :";
    vec=Sort_array(vec);
    for(auto i: vec){ cout<<i<<" ";}
    return 0;
}
