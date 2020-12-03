void Path(Node* root, int sum,int len, int& maxLen, int& maxSum) 
{
    if (!root) {  
        if (maxLen < len) { 
            maxLen = len; 
            maxSum = sum; 
        } else if (maxLen == len && maxSum < sum) 
            maxSum = sum; 
        return; 
    } 
    Path(root->left, sum + root->data, 
                            len + 1, maxLen, maxSum);
    Path(root->right, sum + root->data, 
                            len + 1, maxLen, maxSum); 
}
int sumOfLongRootToLeafPath(Node* root) 
{ 
    if (!root) 
        return 0; 
  
    int maxSum = INT_MIN, maxLen = 0;
    Path(root, 0, 0, maxLen, maxSum);
    return maxSum; 
}
