#include <bits/stdc++.h>
using namespace std;


#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define Pai (3.141592653589)
#define M 1000000007
#define in(x) insert(x);
#define pb push_back
#define pp pop_back
#define f first
#define s second
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
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define COUNT(x,u) count(all(x), u)
#define B break
#define C continue
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cm cout<<"-1"<<endl
#define ps(x,y) fixed<<setprecision(y)<<x
#define rtn return;


void solve()
{
    // code -->
    instr(str);
    stack<char> st;
    unordered_map<char,int> mp;
    rep(i,sz(str)){
        mp[str[i]]++;
    }
    string ans = "";
    rep(i,sz(str)){
        if(mp.count(str[i])){
        if(mp[str[i]] == 1){
            while(st.top() < str[i]){
                ans += st.top();
                mp.erase(st.top());
                st.pop();
            }
            ans += str[i];
            out(ans);
        }
        else{
            while(!st.empty() && st.top() < str[i]){
                st.pop();
            }
            st.push(str[i]);
            mp[str[i]]--;
        }
    }
    }
    out(ans);
}   


int32_t main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}