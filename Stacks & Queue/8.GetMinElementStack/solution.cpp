
int getMin(stack<int>& s){
    int minEle = s.top();
    s.pop();
    while(s.size()!=0){
        int ele = s.top();
        s.pop();
        minEle = min(minEle,ele);
    }
    return minEle;
}