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
const int mx = 2e5 + 90 ;
using namespace std;
int c=1;
vector<int> cnt(mx,0) ;
vi a;
void cnting(int i,int start)
{
    //cout<<i<< " "<<c<<endl;
    if(i==start)
    {
        cnt[i]=c;
        return;
    }
    c++;
    cnting(a[i],start);
    cnt[i]=c;
    return ;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        a = vi (n);
        cnt = vector<int> (n+90, 0 ) ;
        //a.eb(0);
        for(int i=1,temp;i<=n;i++)
        {
            //cin>>temp;
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]==0)
            {
                c=1;
                cnting(a[i],i);
            }
        }
        for(int i=1;i<=n;i++)
            cout<<cnt[i]<< " ";
        cout<<endl;
    }
    return 0;
}


