#include<bits/stdc++.h>
using namespace std;
bool match(char text[],char pat1[],char pat2[]);
bool revmatch(char text[],char pat1[],char pat2[]);
int main()
{
    int i,j;
    char text[100000],pattern1[102],pattern2[102];
    gets(text);
    gets(pattern1);
    gets(pattern2);
    bool forwardd=false,reversee=false;
    if(match(text,pattern1,pattern2)==true)
        forwardd=true;
    if(revmatch(text,pattern1,pattern2)==true)
        reversee=true;
    if(forwardd==true && reversee==false)
        cout<<"forward\n";
    else if(forwardd==true && reversee==true)
        cout<<"both\n";
    else if(forwardd==false && reversee==true)
        cout<<"backward\n";
    else if(forwardd==false && reversee==false)
        cout<<"fantasy\n";
    return 0;
}
bool match(char text[],char pat1[],char pat2[])
{
    int m=strlen(pat1),n=strlen(text),o=strlen(pat2);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m && i+j<n;j++)
        {
            if(text[i+j]!=pat1[j])
                break;
            if(j==m-1)
            {
                i+=m;
                for(;i<n;i++)
                {
                    for(int j=0;j<o && i+j<n;j++)
                    {
                        if(text[i+j]!=pat2[j])
                            break;
                        if(j==o-1)
                            return true;
                    }
                }
            }
        }
    }
    return false;
}
bool revmatch(char text[],char pat1[],char pat2[])
{
    int m=strlen(pat1),n=strlen(text),o=strlen(pat2);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m && (i-j)>=0;j++)
        {
            if(text[i-j]!=pat1[j])
                break;
            if(j==m-1)
            {
                i-=m;
                for(;i>=0;i--)
                {
                    for(int j=0;j<o && (i-j)>=0;j++)
                    {
                        if(text[i-j]!=pat2[j])
                            break;
                        if(j==o-1)
                            return true;
                    }
                }
            }
        }
    }
    return false;
}
