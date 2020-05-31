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
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
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
    ll n,x,y;
    vll a;
    cin>>n>>x>>y;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    for(int i=0;i<n;i++)
    {
        bool check=true;
        for(int j=max(0LL,i-x);j<i;j++)
        {
            if(a[j]<=a[i])
            {
                check=false;
                break;
            }
        }
        if(check)
        {
            for(int k=i+1;k<=min(n-1,i+y);k++)
            {
                if(a[k]<=a[i])
                {
                    check=false;
                    break;
                }
            }
        }
        if(check)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}

