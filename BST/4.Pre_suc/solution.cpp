class Solution{
    Node* FindPrecessor(Node* root){
        while (root->right)
        {
            root=root->right;
        }
        return root;
    }
    Node* FindSucessor(Node* root){
        while (root->left)
        {
            root=root->left;
        }
        return root;
    }
    void findPreSuc(Node* root, Node* &pre, Node* &suc,int key){
        // if the root is null 
        if(!root) return;

        // if root is smaller than key
        if(key<root->key){
            suc = root;
            findPreSuc(root->left,pre,suc,key);
        }
        // if root is greater than key
        else if(key>root->key){
            pre = root;
            findPreSuc(root->right,pre,suc,key);
        }
        else{
            if(root->left) pre = FindPrecessor(root->left);
            if(root->right) suc = FindSucessor(root->right);
        }
    }
};