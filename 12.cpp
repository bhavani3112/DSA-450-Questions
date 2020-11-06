// Replace all shorter elements in arr1 and larger elements in arr2 

void merge(int arr1[], int arr2[], int n, int m)
	{
	   int i=n-1,j=0;
       while(i>=0 && j<m) 
       {
           if(arr1[i]>=arr2[j])
           {
               swap(arr1[i],arr2[j]);
           }
           i--;
           j++;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
	    
	}
