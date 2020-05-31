#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int n,k,i,start=0,j,l;
    string t;
    scanf("%d %d ",&n,&k);
    cin>>t;
    j=n-1;
    for(l=n-2;l>=0;l--)
    {
        for(i=l;i>=0;i--)
        {
        if(t[j]==t[i])
        {
            j--;
        }
        else
        {
            j=n-1;
            break;
        }
        if(i==0)
        {
            start=n-1-j;
        }
    }
    if(start!=0)
        break;
    }
    cout<<t;
    for(j=1;j<k;j++)
    for(i=start;i<n;i++)
        cout<<t[i];
    cout<<endl;
    return 0;
}
