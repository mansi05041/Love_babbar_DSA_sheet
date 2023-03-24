class Solution{
    public:

        // insert the element at the bottom of stack
        void insert_at_bottom(stack<int> &St,int x){
            // insert only if the stack is empty for x
            if(St.empty()==true) St.push(x);
            else{
                int val = St.top();
                St.pop();
                insert_at_bottom(St,x);
                St.push(val);
            }
        }

        // Reverse the Stack
        void Reverse(stack<int> &St){
            if(St.size()>0){
                int val = St.top();
                St.pop();
                Reverse(St);
                insert_at_bottom(St,val);
            }
            return;
        }
};