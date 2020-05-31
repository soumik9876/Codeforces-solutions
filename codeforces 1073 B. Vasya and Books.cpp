#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll books[300000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,p,q,i,j;
    vector<int> a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        books[p]=i;
    }
    ll total=0;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(books[p]<total)
            cout<<0<< " ";
        else
        {
            cout<<books[p]-total<< " ";
            total=books[p];
        }
    }
    cout<<endl;
    return 0;
}
