#include<iostream>
using namespace std;
int trappingwater(int arr[],int n)
{
    int result=0;
    int left_max=0,right_max=0;
    int l=0,h=n-1;
    while(l<=h)
    {
        if(arr[l]<arr[h])
        {
            if(arr[l]>left_max)
            left_max=arr[l];
            else
            result+=left_max-arr[l];
            l++;
        }
        else
        {
            if(arr[h]>right_max)
            right_max=arr[h];
            else
            result+=right_max-arr[h];
            h--;
        }
    }
    return result;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<trappingwater(arr,n)<<endl;
    }
	return 0;
}
