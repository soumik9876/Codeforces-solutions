#include<iostream>
using namespace std;
int main()
{
    string s,t;
    int i,j;
    bool check=true;
    cin>>s>>t;
    if(s.length()==t.length())
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e'  || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]=='a' || t[i]=='e'  || t[i]=='i' || t[i]=='o' || t[i]=='u')
                    continue;
                check=false;
            }
            else
            {
                if(t[i]=='a' || t[i]=='e'  || t[i]=='i' || t[i]=='o' || t[i]=='u')
                    check=false;
            }
        }
    }
    else
    {
        check=false;
    }
    if(check)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
