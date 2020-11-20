vector<int> inOrder(Node* root)
{
    vector<int> res;
    stack<Node*> s;
    s.push(root);
    Node *curr = root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr = s.top();
        s.pop();
        res.push_back(curr->data);
        curr=curr->right;
    }
    return res;
}
