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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,m,k;
    cin>>n>>m>>k;
    ll low=1,high=(n*m),mid;
    while(low<=high)
    {
        mid=low+((high-low)>>1);
        ll cnt=0;
        for(ll i=1;i<=min(m,mid);i++)
        {
            ll num=ceil((double)mid/i)-1;
            //cout<<num<<endl;
            cnt+=min(n,num);
            if(cnt>k)
                break;
        }
        //cout<<cnt<< " "<<mid<<endl;
        if(cnt>=k)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<high<<endl;
    return 0;
}


