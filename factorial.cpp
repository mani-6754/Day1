#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<f;
    return 0;
}
