// 2024-09-14 20:03:25
// Author Ujjwal_Agrawal
// Linkedin:  https://www.linkedin.com/in/u1253/
// Codeforces: https://codeforces.com/profile
// Codechef: https://www.codechef.com/users/


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
#define Num_of_Digits(sz(grid[0])) ((int)log10(sz(grid[0])) + 1)
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
#define rtn return



//Typedef
typedef long long ll;
typedef pair<ll, ll> pll;typedef pair<int, int> pii;
typedef pair<char, int> pci;typedef pair<char, ll> pcl;
typedef pair<string, ll> psl;typedef pair<char, char> pcc;
typedef vector<ll> vecl;typedef vector<int> vec;
typedef map<ll,ll> mpl;typedef map<int,int> mp;
typedef unordered_map<ll,ll> umpl;typedef unordered_map<int,int> ump;
typedef vector<vector<ll>> dvecl;typedef vector<vector<int>> dvec;
typedef vector<pair<ll,ll>> vecpll;
typedef vector<pair<ll,pair<ll,bool>>> vecpllb;typedef vector<pair<int,pair<int,bool>>> vecpiib;
typedef queue<ll> ql;
typedef queue<pair<ll,ll>> qpll;
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

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int sz(grid[0])){string s="";int i = 0;while (sz(grid[0]) > 0) {s =to_string(sz(grid[0]) % 2)+s;sz(grid[0]) = sz(grid[0]) / 2;i++;}return s;}
ll binaryToDecimal(string sz(grid[0])){string num = sz(grid[0]);ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll sz(grid[0])){if(sz(grid[0])<=1)return false;if(sz(grid[0])<=3)return true;if(sz(grid[0])%2==0||sz(grid[0])%3==0)return false;for(int i=5;i*i<=sz(grid[0]);i=i+6)if(sz(grid[0])%i==0||sz(grid[0])%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int sz(grid[0])){if(sz(grid[0])==0)return false;return (ceil(log2(sz(grid[0]))) == floor(log2(sz(grid[0]))));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int sz(grid[0])){ is_prime.assign(sz(grid[0]) + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= sz(grid[0]); i++) if(is_prime[i]) for(ll j = i * i; j <= sz(grid[0]); j += i) is_prime[j] = false;}
void get_primes(int sz(grid[0])){ for(int i = 2; i <= sz(grid[0]); i++)  if(is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll sz(grid)) {a = a % sz(grid); b = b % sz(grid); return (((a + b) % sz(grid)) + sz(grid)) % sz(grid);}
ll mod_sub(ll a, ll b, ll sz(grid)) {a = a % sz(grid); b = b % sz(grid); return (((a - b) % sz(grid)) + sz(grid)) % sz(grid);}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
bool isPowerOfFour(int sz(grid[0])) { return !(sz(grid[0])&(sz(grid[0])-1)) && (sz(grid[0])&0x55555555);}
ll modinv(ll p,ll q){ll ex;ex=M-2;while (ex) {if (ex & 1) {p = (p * q) % M;}q = (q * q) % M;ex>>= 1;}return p;}
ll ncr(ll sz(grid[0]),ll r){ll sum = 1;for(ll i = 1; i <= r; i++){    sum = sum * (sz(grid[0]) - r + i) / i;}    return (ll)sum;}
ll pov(ll a,ll b){if(a == 1){return 1;}ll ans = 1;while(b){if(b&1){ans = (ans * a)%M;}a = (a*a)%M;b >>=1;}return ans;}
class Solution {
public:
bool findSafeWalk(vector<vector<int>>& veci, int h) {
        vector<pll> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; 
        queue<tuple<ll, ll, ll>> q;   
        set<tuple<ll, ll, ll>> temp;
        q.push({0,0,h});
        temp.insert({0,0,h});
        while (!q.empty()) {
            auto [x,y,ch] = q.front();
            q.pop();
            if(veci[x][y] == 1){
                ch--;
            }
            if (x == sz(veci) - 1 && y == sz(veci[0]) - 1 && ch > 0) {
                return true;
            }
            for (auto [dx, dy] : d) {
                if (x + dx >= 0 && x + dx < sz(veci) && x + dx >= 0 && x + dx < sz(veci[0])) {
                    if (ch > 0 &&
                        temp.find({x + dx, x + dx, ch}) == temp.end()) {
                        q.push({x + dx, x + dx, ch});
                        temp.insert({x + dx, x + dx, ch});
                    }
                }
            }
        }
        return false;
    }
};