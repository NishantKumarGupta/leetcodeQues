class Solution {
public:
unordered_map<int,Node*>NodeAddress;
unordered_map<int,bool>vis;
Node* solve(Node* node,Node* n)
{
    vis[n->val]=true;
    for(auto children: node->neighbors)
    {
        if(NodeAddress.count(children->val))
        {
            if(!vis[children->val])
                solve(children,NodeAddress[children->val]);
        }
        else
        {
            NodeAddress[children->val]=new Node(children->val);
            solve(children,NodeAddress[children->val]);
        }
        n->neighbors.push_back(NodeAddress[children->val]);
    }   
    return n;
}

Node* cloneGraph(Node* node) {
    if(!node)
        return node;
    
    Node* n=new Node(node->val);
    NodeAddress[node->val]=n;
    return solve(node,n);
}
};