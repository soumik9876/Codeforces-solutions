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
        string n,even,odd,ans;
        cin>>n;
        for(auto i:n)
        {
            if((i-48)%2)
                odd+=i;
            else
                even+=i;
        }
        int i=0,j=0,oddsz=odd.size(),evensz=even.size();
        while(i<oddsz || j<evensz)
        {
            if(i<oddsz && j<evensz)
            {
                if(odd[i]<even[j])
                {
                    ans+=odd[i];
                    i++;
                }
                else
                {
                    ans+=even[j];
                    j++;
                }
            }
            else if(i>=oddsz)
            {
                ans+=even[j];
                j++;
            }
            else if(j>=evensz)
            {
                ans+=odd[i];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


