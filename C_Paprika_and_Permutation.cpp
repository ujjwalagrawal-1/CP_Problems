#include<bits/stdc++.h>
using namespace std;
int T=1,n,a[200003],b[200003],sum[200003];
bool vis[200003];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=0;i<=n+1;i++)sum[i]=0,vis[i]=0;
		int ans=0;
		for(int i=1;i<=n;i++){
			scanf("%d",a+i),b[i]=min(n,a[i]-1>>1);
			if(a[i]<=n&&!vis[a[i]])
				vis[a[i]]=1;
			else
				sum[b[i]]++,ans++;
		}
		int nd=0;
		bool ok=1;
		for(int i=n;i>0;i--){
			sum[i]+=sum[i+1];
			nd+=1-vis[i];
			if(sum[i]<nd)
				ok=0;
		}
		if(ok)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
}
//>=2n n 2n+1 n 