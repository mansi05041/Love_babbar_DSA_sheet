#include<iostream>
#include<vector>
using namespace std;
int MaxProfit(vector<int> arr){
    int min_price=arr[0];
    int max_price=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<min_price) min_price=arr[i];
        else if(arr[i]-min_price>max_price) max_price=arr[i]-min_price;
    }
    return (max_price);
}

int main()
{
    /* code */
    vector<int> v={7,1,5,3,6,4};
    cout<<"Profit ::"<<MaxProfit(v);
    return 0;
}
