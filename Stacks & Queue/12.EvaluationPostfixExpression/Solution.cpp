class Solution{
    public:

    // Function to evaluate a postfix expression
    int evaluatePostfix(string s){
        stack<int> st;
        for(auto i: s){
            if(isdigit(i)){
                st.push(int(i-'0'));
            }
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                switch (i)
                {
                case i='+':
                    st.push(b+a);
                    break;
                case i='-':
                    st.push(b-a);
                    break;
                case i='*':
                    st.push(b*a);
                    break;
                case i='/':
                    st.push(b/a);
                    break;
                default:
                    break;
                }
            }
        }
        return(st.top());
    }
};