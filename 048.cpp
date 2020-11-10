	int isPlaindrome(string S)
	{
	   int n = S.length();
	   int j=n-1;
	   for(int i=0;i<n/2;i++)
	   {
	       if(S[i]!=S[j])
	       return 0;
	       j--;
	   }
	  
	   return 1;
	}
