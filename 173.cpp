vector <int> bottomView(Node *root)
{
    vector<int> res;
    if(!root)
    return res;
    int hd = 0;
    map<int, int> m;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            pair<Node *, int> curr = q.front();
            q.pop();
            
            Node *temp = curr.first;
            hd = curr.second;
            
            if (temp->left)
            q.push(make_pair(temp->left,hd - 1));
            if (temp->right)
            q.push(make_pair(temp->right,hd + 1));
            
            m[hd] = temp->data;
        }
        
    }
    for (auto it : m)
    res.push_back(it.second);
    
    return res;
}

