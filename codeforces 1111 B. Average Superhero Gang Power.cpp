#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n,k,m,i,j;
    double temp,total=0;
    vector<double> a;
    cin>>n>>k>>m;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
        total+=temp;
    }
    sort(a.begin(),a.end());
    double avg=total/(double)n;
    i=0;
    while(a[i]<avg && m>0 && n>0)
    {
        total-=a[i];
        n--;
        avg=total/(double)n;
        i++;
        m--;
    }

    if((n*k)>=m)
        total+=m;
    else
        total+=(n*k);

    cout << fixed << setprecision(20) << total/(double)n<<endl;
    return 0;
}
