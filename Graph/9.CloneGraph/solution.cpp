solution{
    public:
    void dfs(Node* currNode, Node* copyNode, vector<Node*> &visited){
        // mark the copyNode visited
        visited[copyNode->val] = copyNode;
        // Iterate all the neighbors node 
        for(auto it: currNode->neighbors){
            // if the neighbor is not visited yet
            if(visited[it->val]==NULL){
                Node* newNode = new Node(it->val);
                (copyNode->neighbors).push_back(newNode);
                dfs(it,newNode,visited);
            }
            else{
                (copyNode->neighbors).push_back(visited[it->val]);
            }
        }
    }
    Node* cloneGraph(Node* node){
        // boundary case
        if(Node==NULL) return NULL;

        // visited array
        vector<Node*> visited(101,NULL);

        // create the copy of the given node and mark it visited
        Node* copy = new Node(node->val);
        visited[node->val] = copy;

        // Iterate for all the neighbors
        for(auto it: node->neighbors){
            // if the neighbor is not visited yet
            if(visited[it->val]==NULL){
                // create a new copy of the neighbor and push it into copy neighbor list
                Node* newNode = new Node(it->val);
                (copy->neighbors).push_back(newNode);
                dfs(it,newNode,visited); 
            }
            else{
                (copy->neighbors).push_back(visited[it->val]);
            }
        }
        return copy;
    }
};


