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
    int n,temp;
    map<int,bool> repeat;
    vi a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }

    int mn=n-1;
    for(int i=0;i<n;i++)
    {
        map<int,bool> rep;
        bool check=true;
        for(int j=0;j<i;j++)
        {
            if(rep.find(a[j])!=rep.end())
            {
                check=false;
                break;
            }
            rep[a[j]]=1;
        }
        if(check==false)
        {
            continue;
        }
        int ind=n;
        for(int j=n-1;j>=i;j--)
        {
            if(rep.find(a[j])!=rep.end())
            {
                break;
            }
            else
                ind=j;
            rep[a[j]]=1;
        }
        mn=min(mn,ind-i);
    }
    cout<<mn<<endl;
    return 0;
}


