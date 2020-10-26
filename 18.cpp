#include<iostream>
using namespace std;
int No_Of_Pairs(int arr[],int n,int sum)
{
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++)
    hash[arr[i]]++;
    
    int twice_count = 0;  
    for(int i=0;i<n;i++)
    {
        twice_count+=hash[sum-arr[i]];
        if(sum-arr[i]==arr[i])
        twice_count--;
    }
    return twice_count/2;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<No_Of_Pairs(arr,n,k)<<endl;
    }
    return 0;
}
