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
   ios_base::sync_with_stdio(0);
    ll k;
    cin>>k;
    if(k<25)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll m,n;
    bool check=false;
    for(ll i=5;i*i<=k;i++)
    {
        if(k%i==0)
        {
            if(i>=5 && k/i>=5)
            {
                n=i;
                m=k/i;
                check=true;
                break;
            }
            else if(k/i<5)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    if(!check)
    {
        cout<<-1<<endl;
        return 0;
    }
    string s="aeiou";
    char s1[n][m];
    //cout<<n<< " "<<m<<endl;
    ll l=0;
    for(ll i=0;i<n;i++)
    {

        ll t=l;
        l++;
        if(l>=5)
            l=0;
        for(ll j=0;j<m;j++)
        {
            cout<<s[t++];
            if(t>=5)
                t=0;
        }
    }
    cout<<endl;
//    ll l=0;
//    for(ll i=0;i<m;i++)
//    {
//        ll t=i%5;
//        for(ll j=0;j<n;j++)
//        {
//            s1[j][i]=s[t++];
//            cout<<s1[j][i];
//            if(t>=5)
//                t=0;
//        }
//    }
    //cout<<n<< " "<<m<<endl;
//    l=0;
//    for(ll i=0;i<n;i++)
//    {
//        for(ll j=0;j<m;j++)
//        {
//            cout<<s1[i][j];
//        }
//    }
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

