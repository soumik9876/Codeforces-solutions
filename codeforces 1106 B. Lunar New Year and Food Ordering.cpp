#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j,t,i,k,temp;
    cin>>n>>m;
    vector<int> a,c;
    vector< pair<int,int> > d;
    //int d[100001];
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(i=0;i<n;i++)
    {
        cin>>temp;
        c.push_back(temp);
    }
//    for(i=0;i<n;i++)
//    {
//        cin>>temp;
//        pair<int,int> p;
//        p=make_pair(temp,i);
//        d.push_back(p);
//    }
      d=c;
      sort(d.begin(),d.end());
//    for(i=1;i<=n;i++)
//    {
//        d.push_back(i);
//    }
//    j=0;
//    for(i=1;i<n;i++)
//    {
//        k=c[i];
//        j=i-1;
//        while(j>=0 && c[j]>k)
//        {
//            d[j+1]=j;
//            c[j+1]=c[j];
//            j--;
//        }
//        d[j+1]=i;
//        c[j+1]=k;
//    }
//    for(i=0;i<n;i++)
//    {
//        cout<<d[i].first<<" "<<d[i].second<<endl;
//
//    }
    while(m--)
    {
        int price;
        cin>>j>>t;
//        if(a[j-1]>=t)
//        {
//            cout<<
//        }
    }
}
