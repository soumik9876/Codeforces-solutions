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
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;

    int i=0,j=0;
//    if(m-n<-1)
//    {
//        cout<<"NO"<<endl;
//        return 0;
//    }

    while(i<n && j<m)
    {
        if(s[i]!='*' && s[i]!=t[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(s[i]=='*')
        {
            j+=max(0,m-n+1),i++;
        }
        else
            i++,j++;
        if((i==n && j!=m) || (j==m && i!=n))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}

