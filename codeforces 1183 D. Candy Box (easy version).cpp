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
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
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
using namespace std;

void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
   #ifdef _soumik
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(0);
    ll q;
    cin>>q;
    while(q--)
    {

        ll n,a,mx=0;

        cin>>n;
        vll numbercnt(n+90);
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            numbercnt[a]++;
//            cnts[numbercnt[a]]++;
        }
        ll total=0;
        sort(all(numbercnt),greater<ll> ());
        //cout<<mx<<endl;
        ll x=mx,ans=0,taken=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            //cout<<x<< " "<<i<< " "<<cnts[i]<<endl;
//            if(!cnts[i])
//                continue;
//            ll temp = min(x,i);
//			temp = (temp * (temp+1))/2;
//			x -= cnts[i];
//			x = max(x,0LL);
//			//cout<<x<< " "<<temp<<" "<<ans<<endl;
//			temp -=(x*(x+1))/2;
//			ans += temp;
//			if(!x)
//                break;
            //cout<<numbercnt[i]<<endl;
            if(numbercnt[i]>=taken)
            {
                ans+=taken-1;
                taken--;
            }
            else
            {
                ans+=numbercnt[i];
                taken=numbercnt[i];
            }
            if(taken==0 || numbercnt[i]==0)
                break;
        }
        cout<<ans<<endl;
    }
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

