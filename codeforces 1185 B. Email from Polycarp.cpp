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
int main()
{
    //_time_
   //FAST_IO();
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        bool check=true;
        cin>>a>>b;
        ll s1=a.size(),s2=b.size();
        //ll i=0,j=0;
        if(s1>s2)
        {
            cout<<"NO\n";
            continue;
        }
        ll cnt1=0,cnt2=0;
        ll j=0;
        for(ll i=0;i<s1;i++)
        {
            cnt1=0,cnt2=0;
            char c=a[i];
            //cout<<i<< " "<<j<<endl;
            while(i<s1 && a[i]==c)
            {
                i++;
                cnt1++;
            }
            i--;
            while(j<s2 && b[j]==c)
            {
                cnt2++;
                j++;
            }

            //cout<<cnt1<< " "<<cnt2<<endl;
            if(cnt1>cnt2)
            {
                cout<<"NO\n";
                check=false;
                break;
            }
        }
        if(j<s2 && check)
        {
            cout<<"NO\n";
            check=false;
        }
        if(check)
            cout<<"YES\n";

//        while(i<s1 && j<s2)
//        {
//            cout<<a[i]<< " "<<i<< " "<<b[j]<< " "<<j<<endl;
////            if(a[i]==b[j])
////            {
////                j++;
////                continue;
////            }
//            if(a[i]!=b[j])
//                i++;
////            else if(i<s1-1)
////            {
////                if(a[i+1]==b[j])
////                    i++;
////            }
//            if(s1-i>s2-j)
//            {
//                cout<<"NO\n";
//                check=false;
//                break;
//            }
//            cout<<a[i]<< " "<<b[j]<<endl;
//            if(a[i]!=b[j])
//            {
//                cout<<"NO\n";
//                check=false;
//                break;
//            }
//            j++;
//
//        }
//        if(check)
//            cout<<"YES\n";
    }

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

