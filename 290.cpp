int findMaxLen(string str) {
        int n = str.length();
        int result = 0;
        stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            s.push(i);
            else
            {
                s.pop();
                if(!s.empty())
                result = max(result,i-s.top());
                else
                s.push(i);
            }
        }
        return result;
    }
