#include<iostream>
using namespace std;
int main()
{
    long long n,q,x,y,num;
    cin>>n>>q;
    while(q--)
    {
        cin>>x>>y;
        if(n%2==0)
        {
            if((x+y)%2==0)
            {

                num=((n/2)*(x-1))+(y/2);
                if(x%2!=0)
                    num++;
            }
            else
            {
                num=((n*n)/2)+((n/2)*(x-1))+(y/2);
                if(x%2==0)
                    num++;
            }
        }
        else
        {
             if((x+y)%2==0)
            {

                num=((n/2)*(x-1))+(y/2)+(x/2);
                if(x%2!=0)
                    num++;
            }

            else
            {
                num=((n*n)/2)+1+((n/2)*(x-1))+(y/2)+(x/2);
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
