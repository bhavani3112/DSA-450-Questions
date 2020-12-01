void diagonalPrintUtil(Node* root, int d,map<int, vector<int>> &diagonalPrint)
{
    if (!root)
        return;
    diagonalPrint[d].push_back(root->data);
 
    
    diagonalPrintUtil(root->left,d + 1, diagonalPrint);
    diagonalPrintUtil(root->right,d, diagonalPrint);
}
void diagonalPrint(Node* root)
{
    map<int, vector<int> > diagonalPrint;
    diagonalPrintUtil(root, 0, diagonalPrint);
 
    cout << "Diagonal Traversal of binary tree : \n";
    for (auto it :diagonalPrint)
    {
        vector<int> v=it.second;
        for(auto it:v)
          cout<<it<<" ";
        cout<<endl;
    }
}

// Iterative 

void diagonalPrint(Node* root) 
{ 
    // base case 
    if (root == NULL) 
        return; 
    queue<Node*> q; 
    q.push(root);
    q.push(NULL); 
  
    while (!q.empty()) { 
        Node* temp = q.front(); 
        q.pop(); 
  
        // if current is delimiter then insert another 
        // for next diagonal and cout nextline 
        if (temp == NULL) { 
  
             
            if (q.empty()) 
                return; 
  
            // output nextline 
            cout << endl; 
  
            // push delimiter again 
            q.push(NULL); 
        } 
        else { 
            while (temp) { 
                cout << temp->data << " "; 
  
                
                if (temp->left) 
                    q.push(temp->left);
                temp = temp->right; 
            } 
        } 
    } 
}
