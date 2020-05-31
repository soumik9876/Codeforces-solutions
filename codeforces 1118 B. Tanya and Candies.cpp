#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,total=0,Odd,Even;
    vector<ll> even,odd,a;
    cin>>n;
    even.pb(0);
    odd.pb(0);
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        a.pb(temp);
        if(i%2)
        {
            even.pb(even[i-1]+temp);
            odd.pb(odd[i-1]);
        }
        else
        {
            odd.pb(odd[i-1]+temp);
            even.pb(even[i-1]);
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        Odd=odd[i-1]+even[n]-even[i];
        Even=even[i-1]+odd[n]-odd[i];
        if(Odd==Even)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
