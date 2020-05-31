#include<bits/stdc++.h>
using namespace std;
//bool check[100010];
vector<int> a;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
        a.push_back(0);
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        if(a[temp]==0 )
        {
            cnt++;
            //check[temp]=true;
        }
        a[temp]++;
//        cout<<temp<< " "<<a[temp];
//
//        cout<<cnt<<endl;
        if(cnt==n)
        {
            cout<<"1";
            //memset(check,false,sizeof(check));
            for(int j=0;j<=n;j++)
            {
                a[j]--;
                if(a[j]==0)
                    cnt--;
            }
        }
        else
            cout<<"0";
    }
    cout<<endl;
    return 0;
}
