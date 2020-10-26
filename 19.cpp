vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int> res;
            int duplicate = INT_MIN;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    if(duplicate!=A[i]) // for test cases A[3]={3,3,3},B[3]={3,3,3},C[3]={3,3,3}
                    {
                        duplicate=A[i];
                        res.push_back(A[i]);
                    }
                    i++;k++;j++;
                }
                // x < y 
                else if(A[i]<B[j])
                i++;
                //y<z
                else if(B[j]<C[k])
                j++;
                // x>y and z<y
                else
                k++;
            }
            return res;
        }
