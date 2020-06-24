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
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    if(n==1 && k)
        s[0]='0',k--;
    if(s[0]!='1' && k)
        s[0]='1',k--;

    for(int i=1;i<=n;i++)
    {
         if(!k)
            break;
        if(s[i]!='0')
        {
            s[i]='0';
            k--;
        }

    }
    cout<<s<<endl;
    return 0;
}


