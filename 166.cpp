
void mirror(Node* root) 
{ 
    if (root == NULL) 
        return; 
  
    queue<Node*> q; 
    q.push(root);
    while (!q.empty()) 
    { 
        Node* curr = q.front(); 
        q.pop(); 
  
        // swap left child with right child 
        swap(curr->left, curr->right); 
  
        // push left and right children 
        if (curr->left) 
            q.push(curr->left); 
        if (curr->right) 
            q.push(curr->right); 
    } 
}
