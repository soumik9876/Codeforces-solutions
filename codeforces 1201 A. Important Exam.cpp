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
    int n,m;
    cin>>n>>m;
    int cnts[m][6];
    vi a;
    memset(cnts,0,sizeof(cnts));
    string s;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<m;i++)
        {
            if(s[i]=='A') cnts[i][0]++;
            if(s[i]=='B') cnts[i][1]++;
            if(s[i]=='C') cnts[i][2]++;
            if(s[i]=='D') cnts[i][3]++;
            if(s[i]=='E') cnts[i][4]++;

        }
    }
    for(int i=0,temp;i<m;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    int total=0;
    for(int i=0;i<m;i++)
    {
        int mx=0;
        for(int j=0;j<5;j++)
        {
            if(cnts[i][j]>mx)
                mx=cnts[i][j];
        }
        total+=(mx*a[i]);
    }
    cout<<total<<endl;
    return 0;
}

