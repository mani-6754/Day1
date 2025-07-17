#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<bitset<8>(n)<<endl;
    int k;
    cin>>k;
    cout<<"OR "<<(n|k)<<endl;
    cout<<"AND "<<(n&k)<<endl;
    cout<<"EXOR "<<(n^k)<<endl;
    cout<<"Left shift "<<(n<<k)<<endl;
    cout<<"Right shift "<<(n>>k)<<endl;
    cout<<"NOT "<<(~n)<<endl;
}
