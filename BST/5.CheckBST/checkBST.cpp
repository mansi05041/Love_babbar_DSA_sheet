class Solution{
    private:
    bool isSubtreeLesser(Node* root, int value){
        if(root==NULL) return true;
        if(root->data < value &&
        isSubtreeLesser(root->left, value) &&
        isSubtreeLesser(root->right, value)) return true;
        return false;
    }
    bool isSubtreeGreater(Node* root, int value){
        if(root==NULL) return true;
        if(root->data > value &&
        isSubtreeGreater(root->left, value) &&
        isSubtreeGreater(root->right, value)) return true;
        return false;
    }
    public:
    // Function to check whether a binary tree or not
    bool isBST(Node* root){
        if(!root) return true;
        /* check if the root data is greater than every node in left subtree
         and  the root data is smaller than every node in the right subtree*/
        if(isSubtreeLesser(root->left,root->data) && 
        isSubtreeGreater(root->right, root->data) &&
        isBST(root->left) && isBST(root->right)) return true;
        return false;
    }
};