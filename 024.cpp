#include <bits/stdc++.h>
using namespace std;

int largestconsecutivesubsequence(int arr[],int n)  // O(Nlog(N)) Solution
{
    sort(arr,arr+n);
    int l=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1]+1)
        l++;
        else if (arr[i]==arr[i-1])// for cases {1,2,2,3} , o/p = 3
        continue;
        else
        l=1;
        ans = max(ans,l);
    }
    return ans;
}

int main() {
	int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<largestconsecutivesubsequence(arr,n)<<endl;
    }
	return 0;
}


// O(N) Solution


int largestconsecutivesubsequence(int arr[],int n)
{
    unordered_set<int> s;
    int ans = 0;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int j = arr[i];
            while(s.find(j)!=s.end())
            j++;
            ans = max(ans,j-arr[i]);
        }
    }
    return ans;
}
