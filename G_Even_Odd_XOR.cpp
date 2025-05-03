#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define feach(j,a,b,c) for(int j = a;j<b;j+=c);

int main(){
    ll t;cin>>t;
    while(t--){
        ll a;cin>>a;
        vector<ll> ans(a,0);
        if(a&1){
            ll j = 1;
            for(int i = 1;i<a;i+=2){
               ans[i] = j;
                j++;
            }
            j = 1;
            for(int i = 2;i<a;i+=2){
                ans[i] = j;
                j++;
            }
        }
        else{
            ll j = 1;
            for(int i = 0;i<a;i+=2){
                ans[i] = j;
                j++;
            }
            j = 1;
            for(int i = 1;i<a;i+=2){
                ans[i] = j;
                j++;
            }
        }
        if(((a+1)/2)&1){
            for(int i = 0;i<a-2;i+=2){
                ans[i] |= (1LL<<30);
            }
            for(int i = 2;i<a;i+=2){
                ans[i] |= (1LL<<29);
            }
        }
        else{
            for(int i = 0;i<a;i+=2){
                ans[i] |= (1LL<<30);
            }
        }
        for(auto itr : ans){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    // Time Complexity -> O(n);
    // Space Complexity -> O(n);
}