// O(n^2) Solution

int height(Node* root)
{
    if(root == NULL)
    return 0;
    
    int left_height = height(root->left);
    int right_height = height(root->right);
    
    return max(left_height,right_height)+1;
}
int diameter(Node* root) {
    if(root == NULL)
    return 0;
    
    int left_height = height(root->left);
    int right_height = height(root->right);
    
    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);
    
    return max(left_height+right_height+1,max(left_diameter,right_diameter));
}


// O(n) Solution

// The above implementation can be optimized by calculating the height in the same recursion rather than calling a height() separately. 

int diameterOpt(struct node* root, int* height) 
{ 
    // lh --> Height of left subtree 
    // rh --> Height of right subtree 
    int lh = 0, rh = 0; 
  
    // ldiameter  --> diameter of left subtree 
    // rdiameter  --> Diameter of right subtree  
    int ldiameter = 0, rdiameter = 0; 
  
    if (root == NULL) { 
        *height = 0; 
        return 0; // diameter is also 0  
    } 
  
    // Get the heights of left and right subtrees in lh and 
    // rh And store the returned values in ldiameter and 
    // ldiameter 
    ldiameter = diameterOpt(root->left, &lh); 
    rdiameter = diameterOpt(root->right, &rh); 
  
    // Height of current node is max of heights of left and 
    // right subtrees plus 1 
    *height = max(lh, rh) + 1; 
  
    return max(lh + rh + 1, max(ldiameter, rdiameter)); 
}
