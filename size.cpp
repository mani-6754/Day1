#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<sizeof(n)<<endl;
    float a;
    cout<<sizeof(a)<<endl;
    double b;
    cout<<sizeof(b)<<endl;
    char c;
    cout<<sizeof(c)<<endl;
    bool d;
    cout<<sizeof(d)<<endl;
    cout<<"Signed int range "<<INT_MIN<<"to"<<INT_MAX<<endl;
    cout<<"Unsigned int range "<<0<<"to"<<UINT_MAX<<endl;
    float f=8.34;
    cout<<int(f);


}
