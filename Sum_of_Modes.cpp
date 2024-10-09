#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll yuppi(string& s) {
    ll n = s.size();
    unordered_map<ll,ll> pc;
    ll psf = 0;
    ll count = 0;
    pc[0] = 1;

    for(int i =0;i<n;i++){

        psf += (s[i] == '1') ? 1 : -1;

        if (pc.find(psf) != pc.end()) {
            count += pc[psf];
        }
        pc[psf]++;
    }

    return count;
}

void solve()
{
    // code -->
    ll n;cin>>n;
    string st;cin>>st;
    ll sum = yuppi(st);
    ll ans = n*(n+1)/2;
    ans += sum;
    cout<<ans<<endl;

}   


int32_t main()
{
    ll t = 1;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}