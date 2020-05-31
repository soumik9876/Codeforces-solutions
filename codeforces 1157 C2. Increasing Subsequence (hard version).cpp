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
    ll n,total=0;
    vll a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    string s1;
    ll f=n-1,s=0,last=0;
    while(1)
    {
        //cout<<last<< " "<<s<< " "<<f<<endl;
        if((a[f]<last && a[s]<last) || (s>f))
            break;
        if(a[f]>last && a[s]>last)
        {
            if(a[f]<a[s])
            {
                last=a[f];
                total++;
                s1+='R';
                f--;
            }
            else if(a[s]<a[f])
            {
                last=a[s];
                total++;
                s1+='L';
                s++;
            }
            else
            {
                int num=last,cnt1=0,cnt2=0;
                for(int i=s;i<=f;i++)
                {
                    if(a[i]>num)
                    {
                        num=a[i];
                        cnt1++;
                    }
                    else
                        break;
                }
                num=last;
                for(int i=f;i>=s;i--)
                {
                    if(a[i]>num)
                    {
                        num=a[i];
                        cnt2++;
                    }
                    else
                        break;
                }
                //cout<<cnt1<< " "<<cnt2<<endl;
                if(cnt1>=cnt2)
                {
                    total+=cnt1;
                    s1.append(cnt1*1u,'L');
                }
                else
                {
                    total+=cnt2;
                    s1.append(cnt2*1u,'R');
                }
                break;
            }
        }
        else if(a[f]>last)
        {
            last=a[f];
            total++;
            s1+='R';
            f--;
        }
        else if(a[s]>last)
        {
            last=a[s];
            total++;
            s1+='L';
            s++;
        }
        else
            break;
    }
    cout<<total<<endl<<s1<<endl;
    return 0;
}


