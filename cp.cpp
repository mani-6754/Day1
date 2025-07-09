#include <iostream>
using namespace std;
int main()
{
    int a;
    char b;
    cin>>a>>b;
    if(a>=18){
        if(b=='F'){
            cout<<"Female Adult";
        }else{
            cout<<"Male Adult";
        }
    }else{
        if(b=='F'){
            cout<<"Female Kid";
        }else{
            cout<<"male Kid";
        }
    }

    return 0;
}
