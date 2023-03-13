class Solution{
    public:

    // Function to check if brackets are balanced or not
    bool isPar(String x){
        stack<char> st;
        for(auto i:x){
            if(st.empty()) st.push(i);
            else if((i==')' && st.top()=='(')||(i==']' && st.top()=='[')||(i=='}' && st.top()=='{')) st.pop();
            else st.push(i);
        }
        return(st.empty());
    }
};