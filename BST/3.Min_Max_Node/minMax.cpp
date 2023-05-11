class Solution{
    public:

    // function to find the max element
    int findMax(Node* root){
        if(!root) return(-1);
        int MaxVal = root->data;
        while (root->right)
        {
            MaxVal = root->right->data;
            root = root->right;
        }
        reutn MaxVal;
    }
    // function to find the min element
    int findMin(Node* root){
        if(!root) return(-1);
        int MinVal = root->data;
        while (root->left)
        {
            MinVal = root->left->data;
            root = root->left;
        }
        return MinVal;
    }
};