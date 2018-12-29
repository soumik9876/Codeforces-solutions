#include<iostream>
using namespace std;
int main()
{
    int n,i,current;
    cin>>n;
    int p[1005];
    bool mark[1005];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
            mark[j]=true;
        current=i;
        while(mark[current-1]!=false)
        {
            mark[current-1]=false;
            current=p[current-1];
            //cout<<current<<" ";
        }
        cout<<current<<" ";
    }
    cout<<endl;
    return 0;
}
