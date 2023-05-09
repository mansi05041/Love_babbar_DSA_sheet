class Solution{
    public:
    // function to reverse the string
    void reverseString(vector<char>& s){
        int start = 0;
        int end = s.size()-1;
        while (start<=end)
        {
            // swap the values
            swap(s[start],s[end]);
            // update the pointers
            start++;
            end--;
        }
    }
};