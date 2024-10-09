// Date time
// Author Keert_Agrawal
// Linkedin:  https://www.linkedin.com/in//
// Codeforces: https://codeforces.com/profile/
// Codechef: https://www.codechef.com/users/

#include <bits/stdc++.h>
using namespace std;

//Speed
#define goli() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);  // Not to be touched  100% beats iske karan ayengaa hamesha

//Macros
#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define py (3.141592653589)
#define M 1000000007 
#define ins(x) insert(x);
#define pb push_back
#define pp pop_back
#define f1 first
#define s2 second
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

int powint(int base, int exponent) {int result = 1;for (int i = 0; i < exponent; i++) {result *= base;}return result;}

//Typedef
typedef long long ll;
typedef pair<ll, ll> pi;
typedef vector<ll> vec;
typedef vector<char> vec_ch;
typedef map<ll,ll> mp;
typedef unordered_map<int,int> ump;
typedef vector<vector<ll>> dvec;
typedef vector<pair<ll,ll>> vec_pair;
typedef vector<pair<ll,pair<ll,bool>>> vec_db_pr;
typedef queue<ll> q;
typedef queue<pair<ll,ll>> doq;
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

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

// //Constants
// vector <ll> primes;
// vector <bool> is_prime;

// // Mathematical functions
// void Sieve(int n){ is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= n; i++) if(is_prime[i]) for(ll j = i * i; j <= n; j += i) is_prime[j] = false;}
// void get_primes(int n){ for(int i = 2; i <= n; i++)  if(is_prime[i])  primes.push_back(i); }
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

void solve()
{
    int x = 2,ans = 0;
    for(int i = 0;i<x;i++){
        ans+=1;
    }
    out(ans);
}   


int32_t main()
{
    goli()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif

    int t = 1;
    // cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}