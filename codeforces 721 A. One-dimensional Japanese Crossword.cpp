#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,cnt=0,check=0,i,j;
    vector<int> a;
    char c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c=='B')
        {
            cnt++;
            check=1;
        }

        else
        {
            if(check)
            {
                a.push_back(cnt);
                cnt=0;
                check=0;
            }
        }
    }
    if(cnt)
        a.push_back(cnt);
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
