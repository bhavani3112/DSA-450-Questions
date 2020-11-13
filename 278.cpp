bool ispar(string x)
{
    stack<char>s;
    char y;
    int i=0;
    while(x[i])
    {
        if(x[i]=='(' || x[i]=='{' || x[i]=='[')
        {
            s.push(x[i++]);
            continue;
        }
        if(x[i]!=')' && x[i]!='}' && x[i]!=']')
        {
            i++;
            continue;
        }
        if (s.empty()) 
        return false; 
        
        switch(x[i])
        {
            case ')':
            y = s.top();
            s.pop();
            if(y=='{' || y=='[')
            return false;
            break;
            
            case '}':
            y = s.top();
            s.pop();
            if(y=='(' || y=='[')
            return false;
            break;
            
            case ']':
            y = s.top();
            s.pop();
            if(y=='(' || y=='{')
            return false;
            break;
        }
        i++;
    }
    return s.empty();
    
}
