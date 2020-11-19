vector<int> levelOrder(Node* node)
{
    vector<int> res;
    queue<Node*>q;
    q.push(node);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        res.push_back(temp->data);
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
    return res;
}
