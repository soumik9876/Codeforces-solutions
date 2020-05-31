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
        ll n;
        cin>>n;
        vi nums;
        nums.eb(n);
        ll num=1;
        while(num<=n)
        {

            ll high=n+1,low=num+1,mid,prev=n/num;

            while(high>=low)
            {
                //cout<<high<< " "<<low<<" "<<num<<endl;
                mid=(high+low)>>1;
                if(n/mid==prev)
                {
                    low=mid+1;
                    if(low>high)
                        high++;
                }
                else if(n/mid<prev)
                    high=mid-1;
            }
            num=mid;
            nums.eb(n/num);
        }
//        while(num>=1)
//        {
//            nums.eb(n/num);
//            num=(num+(n%num))/2;
//        }
        cout<<nums.size()<<endl;
        for(auto i=nums.rbegin();i!=nums.rend();i++)
            cout<<*i<< " ";
        cout<<endl;
    }
    return 0;
}


