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
        string s;
        cin>>s;
        vector<string> s1={"op","used","usam","adinm"},s2={"FILIPINO","JAPANESE","JAPANESE","KOREAN"};
        for(int j=0;j<4;j++)
        {
            int cnt=0;
            bool check=true;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s1[j][cnt++]!=s[i] )
                {
                    check=false;
                    break;
                }
                if(cnt==s1[j].size())
                {
                    break;
                }
            }
            if(check)
            {
                cout<<s2[j]<<endl;
                break;
            }
        }
    }
    return 0;
}


