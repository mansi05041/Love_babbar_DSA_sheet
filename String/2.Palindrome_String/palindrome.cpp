class Solution{
    public:
    // check if the string is palindrome or not
    int Palindrome(String s){
        int start = 0;
        int end = s.size()-1;
        while (start<=end)
        {
            // check if both characters are equal
            if(s[start]!=s[end]) return 0;
            low++;
            high--;
        }
        return 1;
    }
};