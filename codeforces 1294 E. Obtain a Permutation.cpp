
// Problem : E. Obtain a Permutation
// Contest : Codeforces Round #615 (Div. 3)
// URL : https://codeforces.com/contest/1294/problem/E
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
#define cerr if(0)cerr
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n,m;
    cin>>n>>m;
    vector< vi > a(n+1,vi (m+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int ans=0,total=0;
    
    for(int i=1;i<=m;i++)
    {
        vi cnt(n+1);
        int mx=0,d=-1;
        for(int j=1;j<=n;j++)
        {
            if(a[j][i]>n*m)
                continue;
            int col=a[j][i]%m;
            if(col==0) col=m;
            
            if(col==i)
             {
                 int row=ceil((double)a[j][i]/m);
                 int diff=j-row;
                 if(diff<0)
                     diff+=n;
                 cnt[diff]++;
                 if(mx<cnt[diff]-diff)
                 {
                     mx=cnt[diff]-diff;
                     d=diff;
                 }
                 cerr<<"val "<<a[j][i]<<" "<<row<<" "<<diff<<" "<<cnt[diff]<<endl;
             }   
        }
        cerr<<i<<endl;
        for(auto i:cnt)
            cerr<<i<< " ";
        cerr<<endl;
        if(d!=-1)
        {
            ans+=d;
            total+=cnt[d];
        }
        cerr<<total<<" "<<ans<<endl;
    }
    ans+=((n*m)-total);
    cout<<ans<<endl;
    return 0;
}

