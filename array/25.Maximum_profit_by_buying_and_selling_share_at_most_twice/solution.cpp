#include<iostream>
#include<vector>
using namespace std;

int MAX_Profit_Twice(vector<int> v){
    int first_buy=INT_MIN;
    int first_sell=0;
    int second_buy=INT_MIN;
    int second_sell=0;
    for(auto i:v){
        first_buy=max(first_buy,-i); // -ve values to help in calculation profit
        first_sell=max(first_sell,first_buy+i);
        second_buy=max(second_buy,first_sell-i);
        second_sell=max(second_sell,second_buy+i);
    }
    return second_sell;
}

int main()
{
    vector<int> v ={10, 22, 5, 75, 65, 80};
    cout<<"Max Profit "<<MAX_Profit_Twice(v);
    return 0;
}
