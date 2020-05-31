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
bool cnt[110];
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n;
    vi a;
    cin>>n;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        bool check=true;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(a[i]%a[j]==0 && a[i]!=a[j])
            {
                check=false;
                break;
            }
        }
        if(cnt[a[i]]!=true && check)
        {
            c++;
            cnt[a[i]]=true;
        }
    }
    cout<<c<<endl;
    return 0;
}


