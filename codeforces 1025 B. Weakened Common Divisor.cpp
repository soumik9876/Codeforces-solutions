#include<iostream>
#include<vector>
using namespace std;
vector<long long> divisors;
void divisor(vector<long long> &divisors,long long a,long long b);
int main()
{
    long long n,a,b,i,j;
    cin>>n;
    cin>>a>>b;
    divisor(divisors,a,b);
    n--;
    while(n--)
    {
        cin>>a>>b;
        for(i=0;i<divisors.size();)
        {
            if(a%divisors[i]==0 || b%divisors[i]==0)
            {
                i++;
                break;
            }
            else
                divisors.erase(divisors.begin()+i);
        }
    }
    if(divisors.size()==0)
        cout<<"-1\n";
    else
        cout<<divisors[0]<<endl;
    return 0;
}
void divisor(vector<long long> &divisors,long long a,long long b)
{
    if(a<b)
        swap(a,b);
    divisors.push_back(a);
    divisors.push_back(b);
    for(int i=2;i*i<=a;i++)
    {
        if(i*i==a || i*i==b)
            divisors.push_back(i);
        else if(a%i==0 && b%i==0 && i*i<=b)
        {
            divisors.push_back(i);
            divisors.push_back(a/i);
            divisors.push_back(b/i);
        }
        else if(a%i==0)
        {
            divisors.push_back(i);
            divisors.push_back(a/i);
        }
        else if(b%i==0 && i*i<=b)
        {
            divisors.push_back(i);
            divisors.push_back(b/i);
        }
    }
}
