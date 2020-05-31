#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        char ch='a';
        cin>>n>>k;
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=n/k;j++)
            {
                cout<<ch;
            }
            if(i!=k)
                ch++;
        }
        for(i=1;i<=n%k;i++)
            cout<<ch;
        cout<<endl;
    }
    return 0;
}
