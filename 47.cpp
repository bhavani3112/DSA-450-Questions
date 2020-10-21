 void reverseString(vector<char>& str) 
    {
        int i=0,n=str.size();
        int j = n-1;
        for(int i=0;i<n/2;i++)
        {
            char temp;
            temp= str[i];
            str[i]=str[j];
            str[j]=temp;
            j--;
        }
    }
