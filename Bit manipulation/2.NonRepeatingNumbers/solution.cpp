class Solution{
    public:
    vector<int> singleNumber(vector<int> nums){
        int xorResult = 0;
        for(int i=0;i<nums.size();i++){
            xorResult^=nums[i];
        }
        // Give a bit that is set in xorResult but not in its complement
        int rightMostSetBit = xorResult & ~(xorResult-1);
        int num1 =0;
        int num2 =0;
        for(auto n: nums){
            if(n&rightMostSetBit) num1^=n;
            else num2^=n;
        }
        return{min(num1,num2),max(num1,num2)};
    }
};