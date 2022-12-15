#include<iostream>
#include<vector>

using namespace std;

vector<int> Move_negative(vector<int> arr){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){

        // if both are -ve
        if(arr[left]<0 && arr[right]<0) left++;

        // if both are +ve
        else if(arr[left]>0 && arr[right]>0) right++;

        // if left is +ve and right is -ve
        else if(arr[left]>0 && arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }

        else{
            left++;
            right--;
        }

    }
    return arr;
}

int main()
{
    /* code */
    vector<int> vec ={4,-5,6,-2,9,22,-15,-3};
    cout<<"Moving Negative elements to one side\n";
    vec=Move_negative(vec);
    for(auto i: vec){
        cout<<i;
    } 
    return 0;
}
