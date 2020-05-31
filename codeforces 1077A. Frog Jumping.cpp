#include<iostream>
using namespace std;
int main()
{
    long long t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        cout<<((k-(k/2))*a)-((k/2)*b)<<endl;
    }
    return 0;
}
