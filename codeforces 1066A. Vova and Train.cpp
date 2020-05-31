#include<iostream>
using namespace std;
int main()
{
    long long t,L,v,r1,r2;
    cin>>t;
    while(t--)
    {
        cin>>L>>v>>r1>>r2;
        cout<<(L/v)-((r2/v)-((r1-1)/v))<<endl;
    }
    return 0;
}
