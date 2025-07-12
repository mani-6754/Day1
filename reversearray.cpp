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
    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        a[i]=s[j];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
