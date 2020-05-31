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
    int n,cnts=0;
    vi a;
    cin>>n;
    vi cnt(150002);
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        cnt[temp]++;
        a.eb(temp);
    }
    sort(all(a));
    for(auto i:a)
    {
        if(cnt[i]>=1)
        {
            if(i!=1 && cnt[i-1]==0)
            {
                cnt[i-1]++;
                cnt[i]--;
            }
            else if(cnt[i]>1)
            {
                cnt[i+1]++,cnt[i]--;
            }
        }
        //else
            //cnts++;
        //cout<<i<< " "<<cnts<<endl;
    }
    for(auto i:cnt)
    {
       // cout<<i<< " ";
        if(i>0) cnts++;
    }
   // cout<<endl;
    cout<<cnts<<endl;
    return 0;
}


