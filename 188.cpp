int largest_subtree_sum (Node* root,int &ans)
{
    if(!root)
    return 0;
    
    int current_sum = root->key + largest_subtree_sum(root->left,ans) + 
    largest_subtree_sum(root->right,ans);
    ans = max(current_sum,ans);

    return current_sum;

}
