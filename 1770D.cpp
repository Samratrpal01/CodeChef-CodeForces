#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
bool flag;
bool vis[1000010];
int T,n,siz,sum;
int a[1000010],b[1000010];
vector<int>g[1000010];
void dfs(int u){
	vis[u]=1;
	siz++;
	sum+=g[u].size();
	for(int i=0;i<g[u].size();i++){
        int v=g[u][i];
		if(v==u)flag=true;
		if(vis[v])continue;
		dfs(v);
	}
}
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			g[i].clear();
			vis[i]=0;
		}
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)scanf("%d",&b[i]);
		for(int i=1;i<=n;i++){
			g[a[i]].push_back(b[i]);
			g[b[i]].push_back(a[i]);
		}
		ll ans=1;
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				sum=0;
				siz=0;
				flag=false;
				dfs(i);
//				cout<<"i="<<i<<" sum="<<sum<<" siz="<<siz<<" flag="<<flag<<endl;
				if(2*siz!=sum)ans=0;
				else{
					if(flag)ans=ans*n%mod;
					else ans=ans*2%mod;
				}
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
