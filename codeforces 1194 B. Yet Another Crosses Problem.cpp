#include<bits/stdc++.h>
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
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll q,n,m;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        char box[n+50][m+50];
        vi row(n+50),col(m+50);
        for(ll i=0;i<n;i++)
        {
            ll blackrow=0;
            for(ll j=0;j<m;j++)
            {
                cin>>box[i][j];
                if(box[i][j]=='*')
                    blackrow++;
            }
            row[i]=blackrow;
        }
        for(ll i=0;i<m;i++)
        {
            ll blackcol=0;
            for(ll j=0;j<n;j++)
            {
                if(box[j][i]=='*')
                    blackcol++;
            }
            col[i]=blackcol;
        }
        int mn=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll total=(n-row[i])+(m-col[j]);
                if(box[i][j]=='.')
                    total--;
                if(total<mn)
                    mn=total;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}

