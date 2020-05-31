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
        int n,m;
        cin>>n>>m;
        vi a,b,pos(n+1);
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            a.eb(temp);
            pos[temp]=i;
        }
        for(int i=0,temp;i<m;i++)
        {
            cin>>temp;
            b.eb(temp);
        }
        int last=0;
        ll total=0;
        for(int i=0;i<m;i++)
        {
            if(pos[b[i]]>last)
            {
                for(int j=last;j<n;j++)
                {
                    if(a[j]==b[i])
                    {
                        total+=((j-i)*2)+1;
                        last=j;
                        break;
                    }
                }
            }
            else
                total++;
        }
        cout<<total<<endl;
    }
    return 0;
}


