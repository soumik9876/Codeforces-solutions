#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,q;
    cin>>q;
    while(q--)
    {
        long long total=0;
        cin>>n>>a>>b;
        if(b/2>=a)
            total=a*n;
        else
        {
            total=(n/2)*b;
            total+=((n%2)*a);
        }
        cout<<total<<endl;
    }
    return 0;
}
