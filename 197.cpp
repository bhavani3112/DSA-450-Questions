Node *search(Node *root,int key)
{ 
     if(!root || root->data==key)
     return root;
     
     if(root->data < key)
     return search(root->left,key);
     else
     return search(root->right,key);
}
     
