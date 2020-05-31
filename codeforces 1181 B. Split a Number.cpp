#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
using namespace std;
void FAST_IO();
void strrev(string &s)
{
    for(int i=0;i<(s.length()/2);i++)
    {
        swap(s[i],s[s.length()-i-1]);
    }
}
int main()
{
    //_time_
   //FAST_IO();
    ll n,start1,end1,start2,end2;
    string s,sum;
    cin>>n>>s;
    start1=0,end1=(n/2)-1,start2=n/2,end2=n-1;
    if(n/2 && s[n/2]>=s[0])
    {
        start1=0,end1=n/2,start2=(n/2)+1,end2=n-1;
    }
    if(s[start2]=='0')
    {
        ll x=start2,y=start2;
        while(x>=0 && y<=n-1)
        {
            if(s[y]!='0')
            {
                start2=y,end1=y-1;
                break;
            }
            if(s[x]!='0')
            {
                start2=x,end1=x-1;
                break;
            }

            x--,y++;
        }
        //cout<<start2<< " "<<end1<<endl;
    }
    //cout<<start1<< " "<<end1<<start2 << " "<<end2<<endl;
    ll i=end1,j=end2,carry=0;
    while(i>=start1 || j>=start2)
    {
        ll add=carry;
        if(i>=start1)
            add+=s[i]-48;
        if(j>=start2)
            add+=s[j]-48;
        carry=0;
        if(add>=10)
            carry=1,add-=10;
        sum+=(add+48);
        i--,j--;
    }
//    if(end1-start1>end2-start2)
//        sum+=(s[0]+carry);
//    else if(end1-start1>end2-start2)
//        sum+=(s[end2]+carry);
    strrev(sum);
    cout<<sum<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

