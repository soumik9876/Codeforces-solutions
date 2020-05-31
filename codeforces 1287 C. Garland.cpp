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
    int n,cnt=0;
    cin>>n;
    vi a,even,odd;
    bool check[n+1]={};
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
        check[temp]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(!check[i] && i%2)
            odd.eb(i);
        else
            even.eb(i);
    }
    int o=0,e=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==0 )
            continue;
        else if(a[i]==0 )
        {
            if((a[i-1]%2 && o<odd.size()) || e==even.size())
                a[i]=odd[o++];
            else
                a[i]=even[e++];
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]==0)
        {
            if((a[i+1]%2 && o<odd.size()) || e==even.size())
                a[i]=odd[o++];
            else
                a[i]=even[e++];
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if((a[i]%2 && a[i+1]%2==0) || (a[i]%2==0 && a[i+1]%2))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

