class Solution{
    public:
    // Function to call the recursive function for Left view
    void RecursiveLeftView(Node* root, vector<int> &LeftView, int &maxLevel, int level){
        // if root is empty, then return
        if(!root) return;
        // check if the existing level is greater than maxLevel
        if(level>maxLevel){
            LeftView.push_back(root->data);
            maxLevel=level;
        }
        // call the recursive fucntion for left child
        RecursiveLeftView(root->left,LeftView,maxLevel,level+1);
        // call the recursive function for the right child
        RecursiveLeftView(root->right,LeftView,maxLevel,level+1);
    }
    // Function to get the traversal of left view of Binary Tree
    vector<int> leftView(Node* root){
        vector<int> LeftView;
        int maxLevel = 0;
        // call the recursive function for root
        RecursiveLeftView(root,LeftView,maxLevel,1);
        return LeftView;
    }
};