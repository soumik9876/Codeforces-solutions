#include<iostream>
using namespace std;
int main()
{
    int n,a[101],i,minn=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i]==0 && (a[i-1]==1 && a[i+1]==1))
        {
               minn++;
               a[i+1]=0;
        }
    }
    cout<<minn<<endl;
    return 0;
}
