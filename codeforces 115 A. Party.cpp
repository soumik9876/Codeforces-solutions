#include<bits/stdc++.h>
using namespace std;
vector<int> tree[2001];
vector<int> root;
int dfs(int r);
int depth[2001];
int main()
{
    int n,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        if(p==-1)
            root.push_back(i);
        else
            tree[p].push_back(i);
    }
    for(int i=0;i<root.size();i++)
        depth[root[i]]=1;
    int maxDepth=0;
    for(int i=0;i<root.size();i++)
    {

        if(dfs(root[i])>maxDepth)
            maxDepth=dfs(root[i]);
    }
    cout<< maxDepth<<endl;
    return 0;
}
int dfs(int r)
{
    if(tree[r].empty())
        return 1;
    for(int i=0;i<tree[r].size();i++)
    {
        int d=dfs(tree[r][i])+1;
        if(d>depth[r])
            depth[r]=d;
    }
    return depth[r];
}
