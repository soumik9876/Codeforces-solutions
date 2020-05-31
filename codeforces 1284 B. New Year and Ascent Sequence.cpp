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
    ll n,total=0,cnt=0;
    cin>>n;
    vi mn(n),mx(n);
    bool ascent[n+1]={};
    for(int i=0;i<n;i++)
    {
        int temp,l;
        cin>>l>>temp;
        mn[i]=mx[i]=temp;
        for(int j=1;j<l;j++)
        {
            cin>>temp;
            if(temp>mn[i])
                ascent[i]=true,cnt++;
            mx[i]=max(mx[i],temp);
            mn[i]=min(mn[i],temp);
        }
        if(ascent[i])
            mx[i]=INT_MAX,mn[i]=-1;
    }
    sort(all(mx));
//    for(int i=0;i<n;i++)
//        cout<<mx[i]<< " "<<mn[i]<<endl;
    for(int i=0;i<n;i++)
    {
//        if(ascent[i]==true)
//        {
//            total+=((2*n)-cnt);
//            continue;
//        }
        //cout<<total<< " "<<mn[i]<< endl;
        int k=upper_bound(all(mx),mn[i])-mx.begin();
//        if(mx[k]==mx1[i])
//            k++;
        total+=(n-k);
    }
    cout<<total<<endl;
    return 0;
}

