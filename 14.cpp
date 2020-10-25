static bool compare(vector<int> &a,vector<int> &b)
    {
        return a[0]<b[0];
    }
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=0;i<intervals.size();i++)
        {
            if(i==intervals.size()-1 || intervals[i][1]<intervals[i+1][0])
                result.push_back(intervals[i]);
            else
            {
                intervals[i+1][1] = max(intervals[i+1][1],intervals[i][1]);
                intervals[i+1][0] = min(intervals[i][0],intervals[i+1][0]); 
            }
        }
        return result;
        
    }
