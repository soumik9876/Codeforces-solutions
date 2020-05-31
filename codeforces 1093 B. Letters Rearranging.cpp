#include<iostream>
#include<string>
using namespace std;
bool palindrome(string &s);
int main()
{
    int t,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        bool check=false;
        if(!palindrome(s))
        {
            cout<<s<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<s.length()-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    swap(s[i],s[i+1]);
                    check=true;
                }
            }
        }
        if(!check)
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
bool palindrome(string &s)
{
    for(int i=0;i<(s.length()/2);i++)
    {
        if(s[i]!=s[s.length()-i-1])
            return false;
    }
    return true;
}
