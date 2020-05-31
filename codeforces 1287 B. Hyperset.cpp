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
    int n,k,total=0;
    cin>>n>>k;
    vector<string> s;
    map<string,int> cnt;
    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        cnt[s1]++;
        s.eb(s1);
    }
    for(int i=0;i<n-2;i++)
    {
        cnt[s[i]]=max(0,cnt[s[i]]-1);
        map<string,int> cnt1=cnt;
        for(int j=i+1;j<n-1;j++)
        {
            string f,g="SET";
            cnt1[s[j]]=max(0,cnt1[s[j]]-1);
            for(int x=0;x<k;x++)
            {
                if(s[i][x]==s[j][x])
                    f+=s[i][x];
                else
                {
                    for(auto it: g)
                    {
                        if(it!=s[i][x] && it!=s[j][x])
                        {
                            f+=it;
                            break;
                        }
                    }
                }
            }
            total+=cnt1[f];
        }
    }
    cout<<total<<endl;
    return 0;
}

