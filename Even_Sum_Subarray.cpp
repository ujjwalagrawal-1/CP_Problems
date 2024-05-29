#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
void S()
{
    ll n;cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)cin>>arr[i];
    unordered_map<int,int> parinda;
    parinda[0] = -1;
    ll maxi = 0;
    ll sum = 0;
    for(ll i = 0;i<n;i++){
        sum += arr[i];
        int mod = sum % 2;
        if (parinda.count(mod)) {
            int prevIndex = parinda[mod];
            maxi = max(maxi, i - prevIndex);
        } else {
            parinda[mod] = i;
        }
    }

    cout<<maxi<<endl;
}   


int32_t main()
{
    ll t = 1;
    cin>>t;
    while(t--)
    {
    S();
    }
    return 0;
}