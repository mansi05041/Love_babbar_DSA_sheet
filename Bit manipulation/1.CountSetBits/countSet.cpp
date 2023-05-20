class Solution{
    public:
    int SetBits(int n){
        int count =0;
        while (N)
        {
            if(N%2==1) count++;
            N/=2;
        }
        return count;
    }
};