#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int uppercnt=0,i,j;
    char input[105];
    cin>>input;
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]>64 && input[i]<91)
            uppercnt++;
    }
    if((input[0]>96 && input[0]<=122) && strlen(input)==1)
        printf("%c",input[0]-32);
    else if(uppercnt==strlen(input))
        cout<<strlwr(input)<<endl;
    else if(uppercnt==strlen(input)-1 && (input[0]>96 && input[0]<=122))
    {
        printf("%c",input[0]-32);
        for(i=1;i<strlen(input);i++)
        {
            printf("%c",input[i]+32);
        }
        cout<<endl;
    }
    else
        cout<<input<<endl;
    return 0;
}
