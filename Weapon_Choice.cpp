

//"2024-01-17 20:28:28",
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
#define f first
#define s second
#define foreach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rforeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) foreach(i,0,j,1)
#define rrep(i,j) rforeach(i,j,0,1)
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

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vec;
typedef vector<char> vec_ch;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef vector<pair<int,pair<int,bool>>> vec_db_pr;
typedef map<int,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;
typedef vector<char> vch;
typedef set<char> sc;
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

int main() {
    int t;cin>>t;
    while(t--){
        int h,x,y1,y2,k,g=0,l;
        cin>>h>>x>>y1>>y2>>k;
        l=h/x;
        if(h%x){
            l++;
        }
        int l2;
        if(k*y1>h){
            l2=h/y1;
            if(h%y1){
                l2++;
            }
        }
        else{
            h-=k*y1;
            l2=k;
            l2+=h/y2;
            if(h%y2){
                l2++;
            }
            
        }
        cout<<min(l2,l)<<endl;
    }
    
	// your code goes here

}



