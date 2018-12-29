#include<iostream>
using namespace std;
int main()
{
    int i,n,a1[55],a2[55],increase=0,decrease=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>a2[i];
        if(a2[i]>a1[i])
            increase+=(a2[i]-a1[i]);
        else
            decrease+=(a1[i]-a2[i]);
    }
    if(increase>decrease)
        cout<<"No\n";
    else
        cout<<"Yes\n";

    return 0;
}
