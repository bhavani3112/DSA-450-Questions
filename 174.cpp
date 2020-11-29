vector <int> zigZagTraversal(Node* root)
{
	vector<int> res;
	if(!root)
	return res;
	
	stack<Node*> currentlevel; 
    stack<Node*> nextlevel;
    
    currentlevel.push(root);
    bool left_or_right=true;
    while (!currentlevel.empty()) 
    {
        struct Node* temp = currentlevel.top(); 
        currentlevel.pop(); 
        
        if(temp)
        {
            res.push_back(temp->data);
            if(left_or_right)
            {
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right);
            }
            else
            {
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            }
        }
        if (currentlevel.empty()) 
        { 
            left_or_right = !left_or_right; 
            swap(currentlevel, nextlevel); 
        } 
    }
    return res;
}
