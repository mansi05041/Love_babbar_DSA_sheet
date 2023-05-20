class Solution{
    public:
    // Function to find the number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int bitdiff = 0;
        while (a || b)
        {
            if(a%2!=b%2) bitdiff++;
            a/=2;
            b/=2;
        }
        return bitdiff;
    }
};