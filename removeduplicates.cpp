#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                continue;
            }
            a[i]=s[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
