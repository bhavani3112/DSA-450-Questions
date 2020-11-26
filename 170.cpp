vector<int> leftView(Node *root)
{
    if(root==NULL)
    return {};
   vector<int> res;
   queue<Node*>q;
   q.push(root);
   int i,count;
   while(!q.empty())
   {
       count = q.size();
       if(count<0)
       break;
       i=0;
       while(i++<count)
       {
           Node *temp = q.front();
           q.pop();
           if(i==1)
           res.push_back(temp->data);
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
       }
   }
   return res;
}
