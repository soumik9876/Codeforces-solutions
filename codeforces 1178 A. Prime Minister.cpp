#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define eb                    emplace_back
using namespace std;
int main()
{
	boost ;
	int n; cin >> n;
	vector <int > ans;
	int x ; cin >> x;
	ans.eb(1);
	int sum = x , other = 0;
	for(int i= 1; i < n ; i++){
		int temp ; cin >> temp;
		if(temp*2 <= x)
			ans.eb(i+1),sum+=temp;
		else
			other += temp;
	}
	if(other < sum){
		cout << (int)ans.size()<< endl;
		for(auto t : ans)
			cout << t << " ";
		cout << endl;
	}
	else
		cout << 0 << endl;
    return 0;
}
