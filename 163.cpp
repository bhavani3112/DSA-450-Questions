vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;
    stack<Node*>s;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        s.push(temp);
        if(temp->right!=NULL)
        q.push(temp->right);
        if(temp->left!=NULL)
        q.push(temp->left);
    }
    while(!s.empty())
    {
        Node *curr = s.top();
        res.push_back(curr->data);
        s.pop();
    }
    return res;
}
