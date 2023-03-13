void deleteMiddle(stack<int>&inputStack, int N){
    // N should be the size of stack after deleting middle element

    stack<int> tmp;
    int curr = 0;

    // pop from main stack and push to tmp stack
    while (!inputStack.empty())
    {
        int i = inputStack.top();
        inputStack.pop();
        // except middle element
        if(curr!=N/2){
            tmp.push(i);
        }
        curr+=1;
    }
    
    // pop from tmp and push to main stack
    while(!tmp.empty()){
        int t = tmp.top();
        tmp.pop();
        inputStack.push(t);
    }
}