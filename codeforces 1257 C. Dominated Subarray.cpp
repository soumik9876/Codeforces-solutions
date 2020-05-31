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
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,mx=INT_MAX;
        cin>>n;
        int last[n+1];
        memset(last,-1,sizeof(last));

        cin>>temp;
        last[temp]=1;
        for(int i=2;i<=n;i++)
        {
            cin>>temp;
            if(last[temp]!=-1)
            {
                mx=min(mx,i-last[temp]+1);

            }
            last[temp]=i;
        }
        if(mx!=INT_MAX)
            cout<<mx<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}


