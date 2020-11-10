#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        string temp = str1+str1;
        if(temp.find(str2) != string::npos)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
    return 0;
}
