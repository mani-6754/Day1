#include <iostream>
using namespace std;
int main()
{
    int n;
    int f=1;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]>s[i+1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
}
