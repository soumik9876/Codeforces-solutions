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
    ll t;
    cin>>t;
    while(t--)
    {
        string s,odd,even;
        cin>>s;
        ll sz=s.size();
        for(ll i=0;i<sz;i++)
        {
            if(s[i]%2)
                odd+=s[i];
            else
                even+=s[i];
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        if(even.size()==0)
            cout<<odd<<endl;
        else if(odd.size()==0)
            cout<<even<<endl;
        else
        {
            if(abs(odd[odd.size()-1]-even[0])!=1)
                cout<<odd+even<<endl;
            else if(abs(even[even.size()-1]-odd[0])!=1)
                cout<<even+odd<<endl;
            else
                cout<<"No answer\n";
        }
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
