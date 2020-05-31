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
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll log3(ll n)
{
    ll cnt=0;
    while(n!=0)
    {
        n/=3;
        cnt++;
    }
    return cnt-1;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll q;
    //for(int i=1;i<10;i++) cout<<log3(i)<<endl;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll num=n;
        vll hudai(43);
        bool powers[50]={},check=true;
        while(num!=0)
        {
            ll power=log3(num);
            hudai[power]++;
            powers[power]=true;
            ll prev=pow(3,power);
            num-=prev;
        }
        ll ans=0;
        for(ll i=0;i<43;i++)
        {
            if(hudai[i]>1)
            {
                hudai[i+1]++;
                hudai[i]=0;
                ans=0;
            }
            else if(hudai[i]==1)
                ans+=pow(3,i);

        }

        cout<<ans<<endl;
    }
    return 0;
}


