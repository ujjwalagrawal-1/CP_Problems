// 2024-06-01 00:56:42
// Author Ujjwal_Agrawal
// Linkedin:  https://www.linkedin.com/in/uj7b1253/
// Codeforces: https://codeforces.com/profile/n_________er
// Codechef: https://www.codechef.com/users/kgr

#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//Macros
#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define Pai (3.141592653589)
#define M 1000000007
#define in(x) insert(x);
#define pb push_back
#define pp pop_back
#define fir first
#define sec second
#define feach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rfeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) feach(i,0,j,1)
#define rrep(i,j) rfeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define all(x) x.begin(), x.end()
#define os(x) cout << x << " ";
#define out(x) cout << x << endl;

 
 
 
//Typedef
typedef long long ll;
typedef pair<ll, ll> pil;typedef pair<int, int> pi;
typedef vector<ll> vecl;typedef vector<int> vec;
typedef map<ll,ll> mpl;typedef map<int,int> mp;
typedef unordered_map<ll,ll> umpl;typedef unordered_map<int,int> ump;
typedef vector<vector<ll>> dvecl;typedef vector<vector<int>> dvec;
typedef vector<pair<ll,ll>> vec_pairl;typedef vector<pair<ll,ll>> vec_pairl;
typedef vector<pair<ll,pair<ll,bool>>> vecdbplb;typedef vector<pair<int,pair<int,bool>>> vecdbpb;
typedef queue<ll> ql;
typedef queue<pair<ll,ll>> qpl;
typedef vector<char> vch;
typedef set<char> sch;
typedef set<int> si;
typedef set<ll> sl;
typedef set<string> ss;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 
// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T, typename V> // cout << map<T,T>
ostream& operator<<(ostream &ostream, const map<T,V> &c) { for (auto &it : c) cout << it.first << " " << it.second<<endl; return ostream; }
 

// Memoization Code (TLE)
ll f(vecl &veci,ll target,vecl &dp){
    if(target == 0){
        return 1;
    }
    if(target < 0){
        return 0;
    }
    if(dp[target] != -1){
        return dp[target];
    }
    int ans = 0;
    rep(i,sz(veci)){
        ans += (f(veci,target-veci[i],dp)%M);
    }
    return dp[target] =  ans%M;
}
void solve()
{
    
    inll(x);
    inll(cnt);
    vecl veci(x);
    cin>>veci;
    vecl dp(cnt+1,0);
    // f(veci,cnt,,dp);
    // dp[0] = 1;
    // rep(j,cnt+1){
    //     rep(i,sz(veci)){
    //         if(j >= veci[i])
    //         dp[j] += (dp[j-veci[i]]%M);
    //     }
    //     dp[j] = dp[j]%M;
    // }
    // out(dp[cnt]);
}   
int32_t main()
{
    
    int t = 1;
    while(t--)
    {
    solve();
    }
    return 0;
}