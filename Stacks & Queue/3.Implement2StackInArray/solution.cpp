/*
class twoStacks{
    int *arr;
    int size;
    int top1, top2;
    public:
    twoStacks(int n=100){size = n; arr=new int[n]; top1=-1; top2=size;}
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};
*/

// Function to push an integer into the stack1
void twoStacks :: push1(int x){
    top1++;
    arr[top1]=x;
}

// Function to push an integer into the stack2
void twoStacks :: push2(int x){
    top2--;
    arr[top2]=x;
}

// Function to remove an element from top of stack1
int twoStacks :: pop1(){
    if(top1==-1) return(-1);
    int ele = arr[top1];
    top1--;
    return(ele);
}

// Function to remove an element from top of stack2
int twoStacks :: pop2(){
    if(top2==size) return(-1);
    int ele = arr[top2];
    top2++;
    return(ele);
}