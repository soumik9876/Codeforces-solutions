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
        int n,cnts=0;
        cin>>n;
        vector<string> s;
        map<string,int> cnt;
        for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            s.eb(s1);
            cnt[s1]++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    //cout<<s[i]<< " "<<s[j]<<endl;
                    cnts++;
                    cnt[s[j]]--;
                    for(int l=0;l<10;l++)
                    {
                        s[j][0]=l+'0';
                        if(cnt.count(s[j])==0)
                        {
                            cnt[s[j]]++;
                            break;
                        }
                    }
                }
            }
        }
        cout<<cnts<<endl;
        for(int i=0;i<n;i++)
            cout<<s[i]<<endl;
    }
    return 0;
}


