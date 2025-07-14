#include<iostream>
using namespace std;
int n=10;//global
void func(int n)
{
    n=23;//local
    cout<<n;
}
int main()
{
    int n=12;//local
    func(n);
    cout<<n;
}
