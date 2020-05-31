#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define eb                    emplace_back
#define ull                   unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,temp,cnt=0,neg=0,pos=0,zero=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<0)
        {
            cnt+=(-1-temp);
            neg++;
        }
        else if(temp>0) cnt+=(temp-1);
        else
        {
            cnt++;
            zero++;
        }
    }
    if(neg%2  && zero==0)
        cnt+=2;
    cout<<cnt<<endl;
    return 0;
}

