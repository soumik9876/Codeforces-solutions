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
#define eb                    emplace_back
#define ull                   unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vi a((2*n)+10);
    if(n%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool tog=true;
    int x=1,y=2*n,num1=1,num2=2*n,cnt=1;
    a[x]=num1,a[y]=num2;
    while(1)
    {
        if(cnt==n) break;
        if(tog)
        {
            x+=n,y-=n;
            a[x]=num1++,a[y]=num2--;
            a[x++]=num1++,a[y--]=num2--;
        }
        else
        {
            x-=n,y+=n;
            a[x]=num1++,a[y]=num2--;
            a[x++]=num1++,a[y--]=num2--;
        }
        cnt++,tog^=1;

    }
    cout<<"YES"<<endl;
    for(int i=1;i<=(2*n);i++)
        cout<<a[i]<< " ";
    cout<<endl;
    return 0;
}


