#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool check=false;
    string input;
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='H' || input[i]=='Q' || input[i]=='9')
        {
            check=true;
            break;
        }
    }
    if(check==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
