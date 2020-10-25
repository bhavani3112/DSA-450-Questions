// O(n^2) Solution

int maxProfit(vector<int>& a) 
    {
        int maxprofit =0;
        for(int i=0;i<a.size();i++)
        {
            for(int j= i;j<a.size();j++)
            {
                if(a[i]<a[j])
                {
                    if((a[j]-a[i])>maxprofit)
                        maxprofit=a[j]-a[i];
                }
            }
        }
        return maxprofit;
        
    }
    
    
    // O(n) Solution
    
    int maxProfit(vector<int>& prices) 
    {
        int max = INT_MAX;
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<max)
                max = prices[i];
            if(prices[i]-max > profit)
                profit = prices[i]-max;
        }
        return profit;
        
    }
