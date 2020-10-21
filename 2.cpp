int middle(int A, int B, int C){
        int mx = max(max(A,B),C);
        int mn = min(min(A,B),C);
        int m = mx^mn^A^B^C;
        return m;
    }
    
    // As There are 3 elements where there will be 1 max and 1 min elemnt . Thus it can counter any two elements among A,B,C leaving the middle element.
