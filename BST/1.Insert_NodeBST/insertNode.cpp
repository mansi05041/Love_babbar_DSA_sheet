class solution{
    public:
    // Function to insert the node in the given BST
    Node* InsertNode(Node* root,int Key){
        // if the root is null then create a new node with key as value and return it
        if(!root){
            Node* temp = new Node(Key);
            return temp;
        }
        // if the key is already present in the BST
        if(root->data==Key) return root;
        // if the key value is greater than the current node
        else if(root->data<Key) root->right = InsertNode(root->right,Key);
        // the key value is smaller than the current node
        else root->left = InsertNode(root->left,Key);
        
        return root;
    }
};