#include<bits/stdc++.h>
using namespace std;
bool checkcolumn(char s[]);
int main()
{
    int n,i,j,col,row;
    char s[100],s1[100];
    scanf("%d ",&n);
    while(n--)
    {
        gets(s);
        col=0;
        row=0;
        if(checkcolumn(s)==true)
        {
            for(i=0;s[i]>='A';i++)
            {
                col=(col*26)+(s[i]-64);
            }
            for(;i<strlen(s);i++)
            {
                row=(row*10)+(s[i]-48);
            }
            printf("R%dC%d\n",row,col);
        }
        else
        {
            for(i=1;s[i]<=57;i++)
            {
                row=(row*10)+(s[i]-48);
            }
            i++;
            for(;i<strlen(s);i++)
            {
                col=(col*10)+(s[i]-48);
            }
            i=0;
            memset(s1,0,100);
            while(col!=0)
            {
                if((col%26)!=0)
                {
                    s1[i++]=64+(col%26);
                    col/=26;
                }
                else
                {
                    s1[i++]='Z';
                    col=(col/26)-1;
                }
            }
            for(i=strlen(s1)-1;i>=0;i--)
            {
                cout<<s1[i];
            }
            cout<<row<<endl;
        }
    }
    return 0;
}
bool checkcolumn(char s[])
{
    if(s[0]!='R')
        return true;
    if(s[1]>='A' && s[1]<='B')
        return true;
    for(int i=2;i<strlen(s);i++)
    {
        if(s[0]=='R' && (s[1]>='0' && s[1]<='9') && s[i]=='C')
            return false;
    }
    return true;
}

