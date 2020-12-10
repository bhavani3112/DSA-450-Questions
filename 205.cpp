void inorder(vector<int> &result,Node* root)
{
    if(!root)
    return;
    inorder(result,root->left);
    result.push_back(root->data);
      inorder(result,root->right);
}
void bst(Node* root, vector<int> &result, int &i)
{
    if(!root)
    return;
    bst(root->left,result,i);
    root->data = result[i++];
      bst(root->right,result,i);
}
Node *binaryTreeToBST (Node *root)
{
vector<int> result;
inorder(result, root);
sort(result.begin(), result.end());
int i =0;
bst(root,result,i);
return root;
}
