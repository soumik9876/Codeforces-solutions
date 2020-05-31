#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n;
    string s;
    string s1="0";
    cin>>n>>s;
    for(ll i=1;i<=9;i++)
    {
        char c;
        cin>>c;
        s1+=c;
    }
    ll a=0,b=0,c=0,d=0,cnt=0,check=1;
    while(b<n && check)
    {

        if(s1[s[b]-48]>s[b])
        {
            a=b;
            while(b<n)
            {
                if(s1[s[b]-48]<s[b])
                    break;
                cnt++;
                b++;
                check=0;
            }
        }
        b++;
    }
   // cout<<c<< " "<<d<<endl;
    for(ll i=0;i<a;i++)
        cout<<s[i];
    for(ll i=a;i<a+cnt;i++)
        cout<<s1[s[i]-48];
    for(ll i=a+cnt;i<n;i++)
        cout<<s[i];
    cout<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
