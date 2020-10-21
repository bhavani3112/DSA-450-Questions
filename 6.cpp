#include <bits/stdc++.h>
using namespace std;

int unionlength(int arr1[],int arr2[],int n,int m)
{
    set<int> result;
    int l=0;
    for(int i=0;i<n;i++)
    result.insert(arr1[i]);
    for(int i=0;i<m;i++)
    result.insert(arr2[i]);
    for (auto it = result.begin(); it != result.end(); it++) 
    l++;
    return l;
}

int main() {
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
        cin>>arr1[i];
        for(int i=0;i<m;i++)
        cin>>arr2[i];
        cout<<unionlength(arr1,arr2,n,m)<<endl;
    }
	return 0;
}
