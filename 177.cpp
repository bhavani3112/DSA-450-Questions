// Iterative 

vector <int> printBoundary(Node *root)
{
     vector<int> res;
     if(!root)
     return res;
     Node *temp = root;
    // res.push_back(root->data);
     while(temp && temp->left)
     {
         res.push_back(temp->data);
         temp=temp->left;
     }
     queue<Node*>q;
     q.push(root);
     while(!q.empty())
     {
         Node *curr = q.front();
         q.pop();
         if(!curr->left && !curr->right)
         res.push_back(curr->data);
         if (curr->left) 
         q.push(curr->left); 
         if (curr->right) 
         q.push(curr->right); 
     }
     vector<int> reverse_right;
     temp = root->right;
     while(temp && temp->right)
     {
         reverse_right.push_back(temp->data);
         temp=temp->right;
     }
     reverse(reverse_right.begin(),reverse_right.end());
     res.insert(res.end(),reverse_right.begin(),reverse_right.end());
     return res;
}


// Recursive

void printLeaves(Node *root)
{
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }
    printLeaves(root->left);
    printLeaves(root->right);
}

void printLeftBoundry(Node *root)
{
    if(root==NULL)
        return ;
    if(root->left ==NULL && root->right ==NULL)
        return;
    cout<<root->data<<" ";
    if(root->left)
    {
        printLeftBoundry(root->left);
    }
    else if(root->right)
    {
        printLeftBoundry(root->right);
    }
}
void printRightBoundry(Node *root)
{
    if(root==NULL)
        return ;
    if(root->left ==NULL && root->right ==NULL)
        return ;
    if(root->right)
    {
        printRightBoundry(root->right);
    }
    else if(root->left)
    {
        printRightBoundry(root->left);
    }
    cout<<root->data<<" ";
}

void _printBoundary(Node *root)
{
//Your code here
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    printLeftBoundry(root->left);
    printLeaves(root);
    printRightBoundry(root->right);
}
