long long maxProduct(int *arr, int n) {
	    
	    if(n==0)
            return 0;
        
        long long ans,maxhere,minhere;
        ans=maxhere=minhere=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
                swap(maxhere,minhere);
            maxhere =max<long long int>(maxhere*arr[i],arr[i]);
            minhere =min<long long int>(minhere*arr[i],arr[i]);
            ans = max(ans,maxhere);
        }
        return ans;
	}
