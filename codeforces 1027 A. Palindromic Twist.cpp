#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
bool palindrome(string &s);
int main()
{
    int t,n,i,j,k;
    bool checkpal;
    string s;
    cin>>t;
    while(t--)
    {
        checkpal=true;
        scanf("%d ",&n);
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1] && abs(s[i]-s[n-i-1])!=2)
            {
                checkpal=false;
                break;
            }
        }
        if(checkpal==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
/*bool palindrome(string &s)
{
    string s1=s;
    for(int i=0;i<(s1.length()/2);i++)
    {
        swap(s1[i],s1[s.length()-i-1]);
    }
    if(s==s1)
        return true;
    return false;
}*/
