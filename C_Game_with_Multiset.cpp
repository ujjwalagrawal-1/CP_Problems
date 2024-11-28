#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll mod=1e9+7;

int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif


    map < ll , ll > ma,val;
    ma[0] = 1ll;
    for(ll i = 1ll ; i < 30 ; i++) {
        ma[i] = ma[i-1ll]*2ll;
    }

    ll n,a,b;
    cin>>n;
    for(ll i = 0 ; i < n ; i++) {
        cin>>a>>b;
        //cout<<n<<endl;
        //cout<<a<<b<<endl;
        if(a == 1) {
            val[ma[b]]++;
        }
        else {

            for(ll i = 30 ; i >= 0 ; i--) {
                if(b >= ma[i] and b!=0) {
                    if(val.count(ma[i])) {
                        b-=min(b/ma[i],val[ma[i]])*ma[i];
                    }
                }
            }
            if(b == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            
        }
        if(i == n-1)
            return 0;
        
    }
    return 0;     
 }