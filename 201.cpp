bool isBSTUtil(struct Node* root, Node *&prev) 
{ 
    if (root) 
    { 
        if (!isBSTUtil(root->left, prev)) 
          return false; 
        if (prev != NULL && root->data <= prev->data) 
          return false; 
   
        prev = root; 
   
        return isBSTUtil(root->right, prev); 
    } 
   
    return true; 
} 
  
bool isBST(Node* root)
{ 
   Node *prev = NULL; 
   return isBSTUtil(root, prev); 
}
