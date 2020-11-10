int countSquares(int N) {
        int c=0;
        for(int i=1;i<N;i++)
        {
            if(i*i<N)
            c++;
            else
            break;
        }
        return c;
    }
