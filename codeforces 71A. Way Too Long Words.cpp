#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char word[101],abb[6];
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        gets(word);
        len=strlen(word)-2;
        memset(abb,0,5);
        if(len<9)
            puts(word);
        else
        {
            abb[0]=word[0];
            if(len<10)
            {
                abb[1]=len+48;
                abb[2]=word[strlen(word)-1];
            }
            else
            {
                abb[1]=(len/10)+48;
                abb[2]=(len%10)+48;
                abb[3]=word[strlen(word)-1];
            }
            puts(abb);
        }
    }
    return 0;
}
