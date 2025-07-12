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
    int k;
    cin>>k;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==k)
        {
            c++;
        }
    }
    cout<<c;
}
