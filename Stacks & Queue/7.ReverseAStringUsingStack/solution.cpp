// return the address of the string
char* reverse(char *S,int len){
    // intilaize char stack
    stack<char> st;
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    int i=0;
    char* result = new char[len+1];
    while (!st.empty())
    {
        result[i]=st.top();
        st.pop();
        i++;
    }
    return result;
}