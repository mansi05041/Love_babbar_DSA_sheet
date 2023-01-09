#include<iostream>
#include<vector>
using namespace std;

int Trap_Water(vector<int> v){
    int trap_water=0;
    int left_max=v[0];
    int right_max=v[v.size()-1];
    int left=1;
    int right=v.size()-2;
    while (left<=right)
    {
        if(left_max<right_max){
            if(left_max<v[left]) left_max=v[left];
            else trap_water+=left_max-v[left];
            left++;
        }
        else{
            if(right_max<v[right]) right_max=v[right];
            else trap_water+=right_max-v[right];
            right--;
        }
    }
    return trap_water;
}

int main()
{
    /* code */
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"Trap Rain water obtained :: "<<Trap_Water(v);
    return 0;
}
