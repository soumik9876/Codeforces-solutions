#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int checkdiv=-1;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            checkdiv=i;
            break;
        }
    }
    if(checkdiv==-1)
        cout<<"NO\n";
    else
        cout<<"YES\n"<<s[checkdiv]<<s[checkdiv+1]<<endl;
    return 0;
}
