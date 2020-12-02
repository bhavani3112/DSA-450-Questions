bool checkutil(Node*root,int level,int *leaflevel)
{
    if(root==NULL)
    return true;
    if(!root->left && !root->right)
    {
        if(*leaflevel == 0)
        {
            *leaflevel = level;
            return true;
        }
        return (level==*leaflevel);
    }
    return (checkutil(root->left,level+1,leaflevel)&&checkutil(root->right,level+1,leaflevel)); 
}
bool check(Node *root)
{
    int level = 0;
    int leaflevel = 0;
    return checkutil(root,level,&leaflevel);
}
