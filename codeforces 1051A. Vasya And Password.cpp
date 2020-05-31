#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int check[3];
int main()
{
    string s;
    int t,i,j;
    scanf("%d ",&t);
    while(t--)
    {
        for(i=0;i<3;i++)
            check[i]=0;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]>64 && s[i]<91)
                check[0]++;
            else if(s[i]>96 && s[i]<123)
                check[1]++;
            else
                check[2]++;
        }
//        for(i=0;i<3;i++)
//        cout<<check[i]<<" ";
        for(i=0;i<s.length();i++)
        {
            if(check[0]>0 && check[1]>0 && check[2]>0)
                break;
            if(check[0]==0)
            {
                if((s[i]>96 && s[i]<121)&& check[1]>1)
                {
                    s[i]='A';
                    check[0]++;
                    continue;
                }
                else if((s[i]>47 && s[i]<58)&& check[2]>1)
                {
                    s[i]='A';
                    check[0]++;
                    continue;
                }
            }
            if(check[1]==0)
            {
                if((s[i]>64 && s[i]<91)&& check[0]>1)
                {
                    s[i]='a';
                    check[1]++;
                    continue;
                }
                else if((s[i]>47 && s[i]<58)&& check[2]>1)
                {
                    s[i]='a';
                    check[1]++;
                    continue;
                }
            }
            if(check[2]==0)
            {
                if((s[i]>64 && s[i]<91)&& check[0]>1)
                {
                    s[i]='1';
                    check[2]++;
                    continue;
                }
                else if((s[i]>96 && s[i]<121)&& check[1]>1)
                {
                    s[i]='1';
                    check[2]++;
                    continue;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
