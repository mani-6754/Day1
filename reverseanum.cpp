#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=0;
    int e;
    while(n!=0)
    {
        e=n%10;
        r=r*10+e;
        n/=10;
    }
    cout<<r;

    return 0;
}
