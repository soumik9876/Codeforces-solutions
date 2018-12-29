#include<iostream>
#include<string>
using namespace std;
int KmpMatch(string main,string pat,int l,int r,int m);
void lpsarray(string pat,int lps[]);
int main()
{
    int n,m,q,l,r,i;
    string s,t;
    cin>>n>>m>>q;
    cin>>s;
    cin>>t;
    while(q--)
    {
        cin>>l>>r;
        cout<<KmpMatch(s,t,l,r,m)<<endl;
    }
    return 0;
}

void lpsarray(string pat,int lps[])
{
    int len=pat.length();
    int suffix=1,prefix=0;
    lps[0]=0;
    while(suffix<len)
    {
        if(pat[suffix]==pat[prefix])
        {
            prefix++;
            lps[suffix++]=prefix;

        }
        else
        {
            if(prefix==0)
                lps[suffix++]=0;
            else
            {
                prefix=lps[prefix-1];
            }
        }
    }
}
int KmpMatch(string main,string pat,int l,int r,int m)
{
    int lps[m],cnt=0;
    lpsarray(pat,lps);
    int i=l-1,j=0;
    while(i<r)
    {
        if(main[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cnt++;
            j=lps[j-1];
        }
        else if(main[i]!=pat[j])
        {
            if(j==0)
                i++;
            else
            {
                j=lps[j-1];
            }
        }
    }
    return cnt;
}
