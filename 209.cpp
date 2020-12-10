void inorder(Node *root, int k, int &n, int &ans)
{
    if (root == NULL || n >= k)
        return;
    inorder(root->left, k, n, ans);
    n++;
    if (k == n)
    {
        ans = root->data;
        return;
    }
    inorder(root->right, k, n, ans);
}

int KthSmallestElement(Node *root, int K)
{
    int n = 0;
    int ans=-1;
    inorder(root, K, n, ans);
    return ans;
}
