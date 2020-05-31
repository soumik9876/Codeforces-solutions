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
        int n,a,b,total1=0,total2=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            total1+=b;
            if(s[i]=='0')
            {
                if(s[i]=='1')
                {
                    total1+=(2*a);
                    total2+=(2*a);
                    check=true;
                }
                else
                {
                    total1+=a;
                    total2+=a;
                }
            }
            else if(s[i]=='1')
            {
                total1+=(2*b)+a;
                total2+=(2*b)+a;

            }
        }
    }
    return 0;
}


