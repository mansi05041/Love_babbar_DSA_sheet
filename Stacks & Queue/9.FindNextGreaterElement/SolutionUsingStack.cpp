class Solution{
    public:
    // Function to find the next Greater element for each element of the array
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // resultant vector
        vector<long long> res(n);
        stack<int> st;
        // traverse the array from end
        for(int i=n-1;i>=0;i--){
            // remove all the elements from stack if the current element is greater than stack's top
            while (!st.empty() && arr[i]>=arr[st.top()])
            {
                st.pop();
            }
            // set the next Greater element
            if(st.empty()==true) res[i]=-1;
            else res[i]=arr[st.top()];
            // push the current element index into stack
            st.push(i);
        }  
        return res;      
    }
};