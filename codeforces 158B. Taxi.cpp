#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bsort(vector <int> &vec,int n);
int main()
{
    int i,n,cnt=0,temp=0,input,nums[6]={0},total;
    vector<int> groups;
    cin>>n;
    //groups=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
       cin>>input;
       //groups.push_back(input);
       nums[input]++;
    }
    //sort(groups.begin(),groups.end());
    //bsort(groups,n);
    /*for(i=0;i<n;i++)
    {
        temp+=groups[i];
        if(temp>4)
        {
            temp=groups[i];
            cnt++;
        }
        if(temp==4)
        {
            temp=0;
            cnt++;
        }
    }*/
    total=nums[4]+(nums[2]/2)+nums[3];
    nums[2]%=2;
    if(nums[2]>0)
    {
        nums[1]-=2;
        total++;
    }
    if(nums[1]>nums[3])
    {
        nums[1]-=nums[3];
        if(nums[1]%4==0)
            total+=nums[1]/4;
        else
            total+=(nums[1]/4)+1;
    }
    cout<<total<<endl;
    return 0;
}
/*void bsort(vector <int> &vec,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]>vec[j])
                swap(vec[i],vec[j]);
        }
    }
}*/
