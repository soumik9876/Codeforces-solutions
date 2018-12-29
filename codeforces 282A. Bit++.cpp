#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()

{
    int t,cnt=0;
    string command;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,command);
        if(command=="++X" || command=="X++")
            cnt++;
        else
            cnt--;
    }
    cout<<cnt<<endl;
    return 0;
}
