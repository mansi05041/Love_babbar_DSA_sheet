#include<iostream>
#include<vector>
using namespace std;

int countJumps(vector<int> a){
    int maxReach =a[0]; // tracks the maximum reachable index of array
    int steps = a[0]; // tracks the steps to make from current location
    int jumps = 0; // tracks the number of jumps

    // edge case
    if(a.size()==0 || a[0]==0) return(-1);

    int i=1;
    while(i<a.size()){

        // check if we reach at the end of loop
        if(i==a.size()-1) return jumps;

        // update the maxReach
        maxReach=max(maxReach,a[i]+i);

        // decrement the steps
        steps--;
        if(steps==0){
            jumps++;

            // out of reach
            if(i>=maxReach) return(-1);
            steps=maxReach-i;
        }
        i++;
    }
    return(-1);
}

int main()
{
    /* code */
    vector<int> vec = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    if(countJumps(vec)==-1) cout<<"Not possible to reach the end";
    else{
        cout<<countJumps(vec);
    }
    return 0;
}
