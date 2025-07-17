#include<iostream>
using namespace std;
int main()
{
    /*int a,b,c;
    cin>>a>>b>>c;
    int s[3];
    if(a>b&&a>c)
    {
        cout<<a<<" is largest.";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<" is largest.";
    }
    else
    {
        cout<<c<" is largest.";
    }
    if(a<b&&a<c)
    {
        cout<<a<<" is smallest.";
    }
    else if(b<a&&b<c)
    {
        cout<<b<<" is smallest.";
    }
    else
    {
        cout<<c<" is smallest.";
    }*/
    int s[3];
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<"Ascending order"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl<<"largest:"<<s[2]<<endl;
    cout<<"smallest:"<<s[0]<<endl;
    cout<<"Descending order"<<endl;
     for(int i=0,j=3-1;i<3,j>=0;i++,j--)
    {
        a[i]=s[j];
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
}
