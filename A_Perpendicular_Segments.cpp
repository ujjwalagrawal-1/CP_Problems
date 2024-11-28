#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define IOtext freopen("input.txt","r",stdin); freopen("op.txt","w",stdout);
#define PI (3.141592653589)
#define M 1000000007
#define MOD1 998244353
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define nl "\n"
#define foreach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rforeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) foreach(i,0,j,1)
#define rrep(i,j) rforeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define ini(a, i) memset(a, i, sizeof(a))
#define inll(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define all(x) x.begin(), x.end()
#define os(x) cout << x << " ";
#define out(x) cout << x << "\n";
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define COUNT(x,u) count(all(x), u)
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pm cout<<"-1\n"
#define ps(x,y) fixed<<setprecision(y)<<x

//Typedef
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef pair<int, int> pii;

template <class T>
using Tree =
  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//  Tree<int> v;
//  v.insert(2);
//  v.insert(1);
//  v.insert(5);
//  v.insert(10);
//  v.insert(3);
//  finds key using index
//  cout << *v.find_by_order(1) << nl;
//  finds index using key
//  cout << v.order_of_key(10) << nl;

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
istream& operator>>(istream &istream, vector<T> &v) {for (auto &it : v)cin >> it; return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T, typename V> // cout << map<T,T>
ostream& operator<<(ostream &ostream, const map<T, V> &c) { for (auto &it : c) cout << it.first << " " << it.second << endl; return ostream; }

//Sorting
bool sorta(const pair<int, int> &a, const pair<int, int> &b) {return (a.second < b.second);}
bool sortd(const pair<int, int> &a, const pair<int, int> &b) {return (a.second > b.second);}

//Bits
string decToBinary(int n) {string s = ""; int i = 0; while (n > 0) {s = to_string(n % 2) + s; n = n / 2; i++;} return s;}
ll binaryToDecimal(string n) {string num = n; ll dec_value = 0; int base = 1; int len = num.length(); for (int i = len - 1; i >= 0; i--) {if (num[i] == '1')dec_value += base; base = base * 2;} return dec_value;}

//Check
bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;}
bool isPowerOfTwo(int n) {if (n == 0)return false; return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int n) { is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for (ll i = 2; i * i <= n; i++) if (is_prime[i]) for (ll j = i * i; j <= n; j += i) is_prime[j] = false;}
void get_primes(int n) { for (int i = 2; i <= n; i++)  if (is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);} //__gcd
ll lcm(ll a, ll b) {return (a / gcd(a, b) * b);}
ll moduloMultiplication(ll a, ll b, ll mod) {ll res = 0; a %= mod; while (b) {if (b & 1)res = (res + a) % mod; b >>= 1;} return res;}
ll powermod(ll x, ll y, ll p) {ll res = 1; x = x % p; if (x == 0) return 0; while (y > 0) {if (y & 1)res = (res * x) % p; y = y >> 1; x = (x * x) % p;} return res;}
ll modinv(ll p, ll q) {ll ex; ex = M - 2; while (ex) {if (ex & 1) {p = (p * q) % M;} q = (q * q) % M; ex >>= 1;} return p;}
ll binaryExponentiation(ll base, ll index) {ll ans = 1; while (index > 0) {if (index & 1) {ans = (ans * base) % M;} base = (base * base) % M; index >>= 1;} return ans;}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
  int x, y, k;
  cin >> x >> y >> k;
  int ch = min(x, y);
  cout << "0 0 " << ch << " " << ch << nl;
  cout << "0 " << ch << " " << ch << " 0" << nl;
}

int32_t main() {
  fastio()
#ifndef ONLINE_JUDGE
  IOtext
  freopen("Error.txt", "w", stderr);
#endif
  auto start1 = high_resolution_clock::now();

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
  cerr << "Time: " << duration . count() / 1000 << " ms" << endl;
#endif
  return 0;
}