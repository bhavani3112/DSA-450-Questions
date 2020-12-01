int toSumTreeUtil(Node *node)
{
    if(!node)
    return 0;
    int root_value = node->data;
    int left_sum = toSumTreeUtil(node->left);
    int right_sum = toSumTreeUtil(node->right);
    node->data = left_sum+right_sum;
    return root_value+node->data;
}
void toSumTree(Node *node)
{
    toSumTreeUtil(node);
}
