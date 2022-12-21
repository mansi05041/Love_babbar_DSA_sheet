#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxProfit(vector<int> arr){
    int profit=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            profit=max(profit,arr[j]-arr[i]);
        }
        
    }
    
    return (profit);
}

int main()
{
    /* code */
    vector<int> v={7,1,5,3,6,4};
    cout<<"Profit ::"<<MaxProfit(v);
    return 0;
}
