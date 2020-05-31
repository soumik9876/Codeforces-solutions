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
        int n,p,k;
        vi a;
        cin>>n>>p>>k;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            a.eb(temp);
        }
        sort(all(a));
        int high=n-1,low=0,mid,ans=0;

        while(high>=low)
        {
            mid=low+((high-low)/2);
            int coins=p;
            bool check=true;
            cout<<high<< " "<<low<< " "<<mid<<endl;
            for(int i=mid;i>=0;i-=k)
            {
                coins-=a[i];
                if(coins<0)
                {
                    check=false;
                    break;
                }
                if(i-k+1<0)
                {
                    int ind=0;
                    while(ind<i)
                    {
                        coins-=a[ind];
                        if(coins<0)
                        {
                            check=false;
                            break;
                        }
                        ind++;
                    }
                    break;
                }

            }
            cout<<high<< " "<<low<< " "<<mid<<" "<<check<<endl;
            if(check)
            {
                low=mid+1;
                ans=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

