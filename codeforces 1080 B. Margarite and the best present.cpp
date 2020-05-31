#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long q,l,r,rvalue,lvalue;
    cin>>q;
    while(q--)
    {
        cin>>r>>l;
        rvalue=((r-1)%2==0)?(r-1)/2:-(((r-1)/2)+1);
        lvalue=(l%2==0)?l/2:-((l/2)+1);
        cout<<lvalue-rvalue<<endl;
    }
    return 0;
}
