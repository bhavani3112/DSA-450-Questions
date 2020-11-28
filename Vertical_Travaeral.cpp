vector<int> verticalOrder(Node *root)
{
    vector<int> res;
    map<int,vector<int>> m;
    int horizontal_distance =0;

    queue<pair<Node *,int>> q;
    q.push(make_pair(root,horizontal_distance));
    while(!q.empty())
    {
        pair<Node *,int> temp = q.front();
        q.pop();
        horizontal_distance = temp.second;
        Node *node = temp.first;

        m[horizontal_distance].push_back(node->data);
        if(node->left)
        q.push(make_pair(node->left,horizontal_distance-1));
        if(node->right)
        q.push(make_pair(node->right,horizontal_distance+1));
    }
    map<int,vector<int>> :: iterator it;
    for(it = m.begin();it!=m.end();it++)
    {
        for(int i=0;i<it->second.size();i++)
        res.push_back(it->second[i]);
    }
    return res;
    
    
}
