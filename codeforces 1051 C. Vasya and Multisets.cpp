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
int cnt[110];
int cnts[110];
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n,others=0,b=0;
    vi s;
    cin>>n;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        s.eb(temp);
        cnts[cnt[temp]]--;
        cnt[temp]++;
        cnts[cnt[temp]]++;
        if(cnt[temp]>2) others++;
    }
    if(cnts[1]%2 && others==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    bool taken=false;
    if(cnts[1]%2==0)
        taken=true;
    for(auto i:s)
    {
        if(cnt[i]==1 && b<cnts[1]/2)
        {
            b++;
            cout<<"B";
        }
        else if(taken==false && cnt[i]>2)
        {
            cout<<"B";
            taken=true;
        }
        else
        {
            cout<<"A";
        }
    }
    cout<<endl;
    return 0;
}


