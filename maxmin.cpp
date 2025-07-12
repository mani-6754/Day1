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
    int maxi=s[0];
    int mini=s[0];
    for(int i=1;i<n;i++)
    {
        if(maxi<s[i])
        {
            maxi=s[i];
        }
        else if(mini>s[i])
        {
            mini=s[i];
        }
    }
    cout<<"Maximum="<<maxi<<"Minimum="<<mini;
}
