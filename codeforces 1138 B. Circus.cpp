#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
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
ll clowns[5],acros[5];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll clown=0,acro=0,both=0,none=0;
    vll clownL,acroL,bothL,noneL;

    string c,a;
    cin>>c>>a;
    ll n=c.size();
    for(ll i =0;i<n;i++)
    {
        if(c[i]=='0' && a[i]=='1')
        {
            acro++;
            acroL.pb(i+1);
        }
        else if(c[i]=='1' && a[i]=='0')
        {
            clown++;
            clownL.pb(i+1);
        }
        else if(c[i]=='1' && a[i]=='1')
        {
            both++;
            both.pb(i+1);
        }
        else if(c[i]=='0' && a[i]=='0')
        {
            none++;
            none.pb(i+1);
        }
    }
    if(clown>n/2 || acro>n/2)
        cout<<-1<<endl;
    else
    {
        if(clown>acro)
            {
                acros[1]+=min(both,clown-acro);
                acro+=acros[1];
                both-=acros[1];
            }
        else if(clown<acro)
        {
            clowns[1]+=min(both,acro-clown);
            clown+=clowns[1];
            both-=clowns[1];
        }
        if(both%2==0)
        {
            acros[1]+=both/2;
            acro+=both/2;
            clowns[1]+=both/2;
            clown+=both/2;
        }
        else
        {
            acros[1]+=(both/2)+1;
            acro+=(both/2)+1;
            clowns[1]+=(both/2)-1;
            clown+=(both/2)-1;
        }
        if(clown>acro)
        {
            ll diff=(clown-acro);
            acro+=diff;
            clown-=diff;
        }
        if(none%)
    }
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

