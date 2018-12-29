#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long int num1,num2,value,ara[50],maximum,temp;
cin>>num1>>num2;
for(value=0;value<num1;value++){
    cin>>ara[value];
}
sort(ara,ara+num1);
cin>>maximum;
for(value=1;value<num2;value++){
        cin>>temp;
   maximum=max(maximum,temp);
}
cout<<maximum*ara[num1-2]<<endl;
}
