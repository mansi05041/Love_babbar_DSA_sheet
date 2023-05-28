# [Clone Graph](https://leetcode.com/problems/clone-graph/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a reference of a node in a connected undirected graph.</br>
Return a deep copy (clone) of the graph.</br>
Each node in the graph contains a value (int) and a list (List[Node]) of its neighbors.</br>
```
class Node {
    public int val;
    public List<Node> neighbors;
}
```

## Algorithm
- if the input node is NULL , return NULL.
- create a visted vector of Node* type with intialize as NULL. This vector is used to keep the track of visited nodes during the cloning process.
- create a copy node with the same value as the input node and mark it as visited by assigning it to the corresponding index in the visited vector.
- Iterate over each node
    - if the neighbor node has not been visited yet, create a new copy (newNode) with the same value as neighbor node.
    - Add the newNode to the list of the copy node.
    - Recursively call the dfs traversal with the neighbor node and the corresponding new node.
    - If the neighbor node has already been visited, add the corresponding visited node to the neighbor list of the copy node(copy).
- Return the copy node.

Time complexity: O(V+E) </br>
Space complexity: O(V) </br>
<code> V : Vertices & E : Edges </code>

