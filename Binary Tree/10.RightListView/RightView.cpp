class Solution{
    public:
    // Function that recursively call the function
    void RecursiveRightLevel(Node* root, vector<int> &RightView, int &maxLevel, int level){
        // if the root is null, then return
        if(!root) return;
        // check if the current level is greater than the maximum level so far
        if(level>maxLevel){
            RightView.push_back(root->data);
            maxLevel = level;
        }
        // call the recursive function for the right child
        RecursiveRightLevel(root->right,RightView,maxLevel,level+1);
        // call the recursive function for the left child
        RecursiveRightLevel(root->right,RightView,maxLevel,level+1);
    }
    // Function to return list containing elements of right view of binary tree
    vector<int> rightView(Node* root){
        vector<int> RightView;
        int maxLevel =0;
        // recursively call the function for the root
        RecursiveRightLevel(root,RightView,maxLevel,1);
        return RightView;
    }
};