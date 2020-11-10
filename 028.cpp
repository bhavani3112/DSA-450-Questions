#include <bits/stdc++.h>
using namespace std;

int triplet_sum(int arr[],int n,int sum)
{
    sort(arr,arr+n);
    int l=0,h=n-1;
    for(int i=0;i<n;i++)
    {
        l=i+1;
        h=n-1;
        while(l<h)
        {
            if(arr[i]+arr[l]+arr[h]==sum)
            return 1;
            else if(arr[i]+arr[l]+arr[h]<sum)
            l++;
            else
            h--;
        }
    }
    return 0;
}

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n>>sum;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<triplet_sum(arr,n,sum)<<endl;
    }
    return 0;
}
