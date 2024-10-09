void Solve(vb&v,vi&pv)
{
    ll n;cin>>n;
    if(n&1){
       int mini=n;
       if(v[mini]==false){
       F(2,sqrt(n)+1,1,i){
           if(n%i==0){
               mini=i;
               break;
           }
       }
           
       }
       ull ans=0;
       Fa(pv,i){
               ans+=1LL*n*i;
               if(i==mini){break;}
           
       }
       cout<<ans<<endl;
    }
    else{
        cout<<n*2<<endl;
    }

}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vb v=sieve(1e6+7);
    vi pv;
    F(2,1e6+8,1,i){if(v[i]){pv.pb(i);}}
	int t=1;
	cin>>t;
	while(t--){Solve(v,pv);}
}
