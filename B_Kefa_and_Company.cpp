
//"2024-02-23 02:37:15",
// Author spy agrawal(ujju)
// Linkedin:  bolo radhe radhe
// Codeforces: jayshreeram bhaiyo
// Codechef: hum pe to hai na 

/*
⠀⠀⠀⣠⣴⣶⠿⠿⣷⣶⣄⡀⠀⠀⠀
⠀⢠⣾⡟⠉⠀⠀⠀⠀⠈⠻⣿⣆⠀⠀
⠀⣿⡏⠀⣴⣄⠀⠀⣠⣤⡄⠸⣿⡄⠀
⠀⣿⣇⠀⠈⠻⠇⠐⠿⠋⠀⢠⣿⠇⠀
⠀⠘⠿⣷⣦⡄⠀⠀⠀⣤⣶⡿⠋⠀⠀
⠀⠀⠀⠀⢿⣷⣤⣤⣴⣿⠃⠀
⠀⠀⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀

श्रीगुरु चरन सरोज रज, निजमन मुकुरु सुधारि। बरनउं रघुबर बिमल जसु, जो दायक फल चारि।।
बुद्धिहीन तनु जानिके, सुमिरौं पवन-कुमार। बल बुधि बिद्या देहु मोहिं, हरहु कलेस बिकार।।
*/

#include <bits/stdc++.h>
using namespace std;

//Speed
#define bumbum() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

//Macros
#define f first
#define pb push_back
#define feach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rfeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define Pai (3.141592653589)
#define instr(x) string x; cin>>x;
#define rep(i,j) feach(i,0,j,1)
#define rrep(i,j) rfeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define pp pop_back
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define B break
#define all(x) x.begin(), x.end()
#define os(x) cout << x << " ";
#define MIN(x) *min_element(all(x))
#define cn cout<<"NO"<<endl
#define SUM(x) accumulate(all(x), 0LL)
#define M 1000000007
#define COUNT(x,u) count(all(x), u)
#define cy cout<<"YES"<<endl
#define in(x) insert(x);
#define C continue
#define ps(x,y) fixed<<setprecision(y)<<x
#define out(x) cout << x << endl;
#define s second
#define MAX(x) *max_element(all(x))
#define cm cout<<"-1"<<endl
#define rtn return;

//Typedef
typedef vector<int> vec;
typedef vector<char> vec_ch;
typedef pair<int, int> pi;
typedef long long ll;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef set<char> sc;
typedef vector<pair<int,pair<int,bool>>> vec_db_pr;
typedef set<string> ss;
typedef set<ll> sl;
typedef map<int,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;
typedef vector<char> vch;
typedef set<int> si;

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

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int n){ is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= n; i++) if(is_prime[i]) for(ll j = i * i; j <= n; j += i) is_prime[j] = false;}
void get_primes(int n){ for(int i = 2; i <= n; i++)  if(is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll modinv(ll p,ll q){ll ex;ex=M-2;while (ex) {if (ex & 1) {p = (p * q) % M;}q = (q * q) % M;ex>>= 1;}return p;}

void solve()
{
    // My Knowledge goes from here (han bhai bas itna hi aata hai)
    inint(x);
    inint(m);
    dvec veci(x,vec(2));
    cin>>veci;
    sort(all(veci));
    int maxi = INT_MIN;
    int sum = 0;
    rep(i,x){
        feach(j,0,x,1){
            if(veci[j][0]>=veci[i][0]){
                break;
            }
            else{
                sum += veci[j][1];
            }
        }
        maxi = max(maxi,sum);
        sum -= veci[i][1];
    }
    out(maxi);
}


int32_t main()
{
    bumbum()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif

    // Hum pe to hai na (With love and experince Codeforces is not for begineers) 
    int radhe = 1;
    // cin>>radhe;
    while(radhe--)
    {
    solve();
    }
    return 0;
}
