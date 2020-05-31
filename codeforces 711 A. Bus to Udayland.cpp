#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,check=0;
    string s[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        {
            for(int j=0;j<s[i].length()-1;j++)
            {
                if(s[i][j]=='O' && s[i][j+1]=='O')
                {
                    s[i][j]='+';
                    s[i][j+1]='+';
                    check=1;
                    break;
                }
            }
        }
        if(check)
            break;
    }
    if(check)
    {
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<s[i]<<endl;
    }
    else
        cout<<"NO\n";
    return 0;
}
