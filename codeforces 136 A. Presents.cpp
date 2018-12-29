#include<iostream>
using namespace std;
int main()
{
    int n,i,friendd,store[150];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>friendd;
        store[friendd]=i+1;
    }
    for(i=1;i<=n;i++)
        cout<<store[i]<<" ";
    cout<<endl;
    return 0;
}
