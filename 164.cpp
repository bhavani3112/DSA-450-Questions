# Iterative 
int height(struct Node* node){
        queue<Node*> q;
        q.push(node);
        int h = 0;
        while(1)
        {
            int node_count = q.size();
            if(node_count==0)
            return h;
            while(node_count>0)
            {
                struct Node* temp = q.front();
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                node_count--;
            }
            h++;
        }
    }
    
    #Recursive 
    
    
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        int left_height = height(node->left);
        int right_height = height(node->right);
        return max(left_height,right_height)+1;
    }
