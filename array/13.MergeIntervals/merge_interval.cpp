#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> Merge_intervals(vector<vector<int>> intervals){
    vector<vector<int>> answer;
    vector<int> temp;
     
    // sort the intervals
    sort(intervals.begin(),intervals.end());
    temp=intervals[0];
    for(auto it: intervals){
        if(temp[1]>=it[0])  temp[1]=max(temp[1],it[1]);
        else{
            answer.push_back(temp);
            temp=it;
        }
    }
    answer.push_back(temp);
    return answer;
}

int main()
{
    /* code */
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = Merge_intervals(intervals);
    for(auto it: ans){
        cout<<"["<<it[0]<<","<<it[1]<<"],";
    }
    return 0;
}
