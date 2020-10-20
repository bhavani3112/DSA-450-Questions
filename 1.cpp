#include <iostream>
using namespace std;

void reverse(string str)
{
    int i=0,n=str.length();
    int j = n-1;
    for(int i=0;i<n/2;i++)
    {
        char temp;
        temp= str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
    cout<<str<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    reverse(str);
	}
	return 0;
}
