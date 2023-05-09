class Solution{
    bool flag = true; // currently set true, assuming the tree is balanced
    // function that return the height of current node
    int GetHeight(Node* root){
        // if the node is null then return 0
        if(!root) return 0;
        // call the recursive function for left and right subtree
        int left = GetHeight(root->left);
        int right = GetHeight(root->right);
        // check the condition for balanced tree
        if(abs(left-right)>1) flag = false;
        // return the height of the current node
        return max(left,right)+1;
    }
    // function that return if the tree is balanced or not
    bool isBalanced(Node* root){
        // call the recursive function for root
        GetHeight(root);
        return flag;
    }
};