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
        string s,p;
        vi cnt(27);
        cin>>s>>p;
        int ssize=s.size(),psize=p.size();
        for(auto i:s)
            cnt[i-96]++;
        bool ch=false;
        for(int i=0;i<=psize-ssize;i++)
        {
            vi cnt1(27);
            for(int j=i;j<i+ssize;j++)
                cnt1[p[j]-96]++;
//            for(int k=1;k<=26;k++)
//            {
//                if(cnt[k]!=cnt1[k])
//                {
//                    check=false;
//                    break;
//                }
//            }
            if(cnt==cnt1)
            {
                ch=true;
                break;
            }
//            if(check)
//                {
//                    ch=true;
//                    break;
//                }
        }
        if(ch)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

