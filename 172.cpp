void topView(struct Node *root)
{
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
            // if pair is empty 
            if (m.find(curr.second) == m.end())
            m[curr.second] = curr.first->data;
            if (curr.first->left)
            q.push(make_pair(curr.first->left, curr.second - 1));
            if (curr.first->right)
            q.push(make_pair(curr.first->right, curr.second + 1));
        }
        
    }
    for (auto it : m)
    cout << it.second << " ";
}
