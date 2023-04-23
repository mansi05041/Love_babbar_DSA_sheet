class solution{
    private:
    // Find the Diameter using Recursive call
    int FindDiameter(Node* node,int &diameter){
        // edge case
        if(node==NULL) return 0;
        // Find the height on both side
        int leftH = FindDiameter(node->left,diameter);
        int rightH = FindDiameter(node->right,diameter);
        // update diameter
        diameter=max(diameter,leftH+rightH+1);
        // return the height at current node
        return 1+max(leftH,rightH);
    }
    public:
    // Function to return the diameter of a binary tree
    int diameter(Node* root){
        int diameter = 0;
        FindDiameter(root,diameter);
        return diameter;
    }
};