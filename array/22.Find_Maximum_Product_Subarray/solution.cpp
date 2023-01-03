#include<iostream>
#include<vector>
using namespace std;

int SubArray_Product(vector<int> v){
    int Max_product=v[0];
    int Min_product=v[0];
    int result=v[0];
    for(int i=1;i<v.size();i++){
        // if negative swap max and min product
        if(v[i]<0) swap(Max_product,Min_product);
        // update max Product
        Max_product=max(Max_product*v[i],v[i]);
        // update min Product
        Min_product=min(Min_product*v[i],v[i]);
        // update result
        result=max(result,Max_product);
    }
    return(result);
}

int main()
{
    /* code */
    vector<int> vec= {2,3,-2,4};
    cout<<"Maximum Subarray Product ::"<<SubArray_Product(vec);
    return 0;
}
