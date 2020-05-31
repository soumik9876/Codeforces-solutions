#include<bits/stdc++.h>
using namespace std;
int cost[100000];
int main()
{
    int n,x,q,m;
    cin>>n;
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cost[x]++;
        if(x>maxx)
            maxx=x;
    }
    for(int i=1;i<=maxx;i++)
    {
        cost[i]+=cost[i-1];
    }
    cin>>q;
    while(q--)
    {
        cin>>m;
        if(m>=maxx)
            cout<<n<<endl;
        else
            cout<<cost[m]<<endl;
    }
    return 0;
}
