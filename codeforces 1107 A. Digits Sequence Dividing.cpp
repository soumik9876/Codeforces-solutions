#include<iostream>
using namespace std;
int main()
{
    int q,n;
    string s;
    cin>>q;
    while(q--)
    {
        cin>>n>>s;
        if(n==2 && s[1]<=s[0])
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n2\n";
            cout<<s[0]<<" ";
            for(int i=1;i<n;i++)
                cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}
