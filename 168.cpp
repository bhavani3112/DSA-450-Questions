vector<int> preorder(Node* root)
{
    vector<int> res;
    stack<Node*> s;
    s.push(root);
    while(curr!=NULL || !s.empty())
    {
        Node *curr = s.top();
        s.pop();
        res.push_back(curr->data);
        if(curr->left)
        s.push(curr->left);
        if(curr->right)
        s.push(curr->right);
    }
    return res;
}
