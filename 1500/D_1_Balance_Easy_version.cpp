#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    ll r = t;
    set<ll> st;
    vector<ll> ans;
    map<ll,ll> mp;
    while(t--){
        char ch;
        ll num;
        cin>>ch>>num;
        if(ch == '+'){
            st.insert(num);
            mp[num] = num;
        }
        else{
            // cout<<"at index = "<<r - t<<" we make in ";
            ll w = max(num,mp[num]);
            while(1){
                if(!st.count(w)){
                    cout<<w<<endl;
                    mp[num] = w;
                    break;
                }
                w += num;
            }
        }
    }
}
