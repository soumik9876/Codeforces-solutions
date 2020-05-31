#include<bits/stdc++.h>
#define ll                    long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t; scanf("%lld",&t); while(t--)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j;
    string s;
    cin>>s;
    int mid=(s.length()-1)/2;
    i=mid+1;
    j=mid-1;
    cout<<s[mid];
    bool check=true;
    while(i<s.length() || j>=0)
    {
        if(check)
        {
            cout<<s[i];
            check=false;
            i++;
        }
        else
        {
            cout<<s[j];
            check=true;
            j--;
        }
    }
    cout<<endl;
    return 0;
}
