void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if (root == NULL)  
    return ;
    
    if(root->key==key)
    {
        if(root->left!=NULL)
        {
            Node *temp = root->left;
            while(temp->right)
            temp=temp->right;
            pre = temp;
        }
        if(root->right!=NULL)
        {
            Node *temp = root->right;
            while(temp->left)
            temp=temp->left;
            suc = temp;
        }
        return;
    }
    // If key is smaller than root's key, go to left subtree 
    if (root->key > key) 
    { 
        suc = root ; 
        findPreSuc(root->left, pre, suc, key) ; 
    } 
    else // go to right subtree 
    { 
        pre = root ; 
        findPreSuc(root->right, pre, suc, key) ; 
    } 
}
