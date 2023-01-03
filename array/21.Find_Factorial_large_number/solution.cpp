#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> factorial(int N){
    vector<int> vec;
        int carry=0;
        int value=0;
        vec.push_back(1);
        for(int i=2;i<=N;i++){
         for(int j=0;j<vec.size();j++){
             value=vec[j]*i+carry;
             vec[j]=value%10;
             carry=value/10;
         }
         while(carry>0){
             value=carry%10;
             vec.push_back(value);
             carry=carry/10;
         }
        }
        reverse(vec.begin(),vec.end());
        return(vec);
}


int main()
{
    /* code */
    int N =5;
    vector<int> ans = factorial(N);
    for(auto i:ans){
        cout<<i;
    }
    return 0;
}
