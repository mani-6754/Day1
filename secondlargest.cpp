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
    int second=s[0];
    int maxi=s[0];
    for(int i=1;i<n;i++)
    {
        if(maxi<s[i])
        {
            maxi=s[i];
        }
    }
   for(int i=0;i<n;i++)
   {
       if(s[i]<maxi&&s[i]>second)
       {
           second=s[i];
       }
   }
   cout<<second;
}
