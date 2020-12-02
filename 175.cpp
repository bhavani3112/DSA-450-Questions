int max(int &a, int &b)
{
    if (a > b)
        return a;
    return b;
}
bool flag;
int isBalance(Node *root)
{
    // Your Code here
    if (root == NULL)
        return 0;
    int a = isBalance(root->left);
    int b = isBalance(root->right);
    if (abs(a - b) > 1)
        flag = false;
    return max(a, b) + 1;
}

bool isBalanced(Node *root)
{
    flag = true;
    isBalance(root);
    return flag;
}
