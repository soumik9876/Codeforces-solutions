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
#define eb                    emplace_back
#define ull                   unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n;
    vector<bool> ex(420);
    vi a,b;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
        ex[temp]=true;
    }
    cin>>m;
    for(int i=0,temp;i<m;i++)
    {
        cin>>temp;
        b.eb(temp);
        ex[temp]=true;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ex[a[i]+b[j]]==false)
            {
                cout<<a[i]<< " "<<b[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}

