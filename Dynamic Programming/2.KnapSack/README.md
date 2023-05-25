# [0-1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or dont pick it (0-1 property).


### Input_output
Input: N = 3
W = 4 </br>
values[] = {1,2,3} </br>
weight[] = {4,5,1} </br>
Output: 3

## Algorithm

### Recursion
```
f(index,weight){
    if(index==0){
        // check if the weight is lesser than total bag weight
        if(Wt[0]<=weight) return val[0];
        return 0;
    }
    // consider the items not to take into bag 
    notTake = 0 + f(index-1,weight);
    Take = INT_MIN;
    // check if the each weight is lesser than total bag weight
    if(wt[inndex]<=weight)  Take+= val[index]+ f(index-1,weight-Wt[index]);
    return max(notTake,Take);
}
```
Time complexity : O(2^n) </br>
Space complexity : O(n)

### Memorization

- Use a 2d array dp[N][W+1], where N is tthe size of iput array and W is is the Weight from 0 to weight-1
- Intialize the dp array to -1
- In Recursion function after checking the index condition, we will check if the dp[index][weight]!=-1, if yes simply return the value from dp array.
- If not find the answer for the given value using recursion function and before returning the value set dp[index][weight] to the obtained solution.

Time Complexity : O(N*W) </br>
Space Complexity : O(N*W) + O(N)

### Tabulation
- Similarly we use a 2d array for dp.
- Set the base condition that is dp[0][i] = val[0] if the weight of item is lesser or equal to the total weight of the bag.
- We use nested loop to apply the recursion logic.
- When the nested loop execution has ended, we will return dp[n-1][W]

Time Complexity : O(N*W) </br>
Space Complexity : O(N*W)

