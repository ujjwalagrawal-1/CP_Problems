#include <bits/stdc++.h>
using namespace std;
// STAY CALM

#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
// #define mod 998244353
#define mod 1000000007
vector<vector<int>> m(200005);
vector<vector<int>> m2(200005);
// vector<int> siz(200005);
vector<int> dist(200005);

#define MAXN 1000001
 
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

signed main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t=1;
 cin>>t;
 sieve();
 while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
 
  int ans=n;
  // binary nahi 
  // 58 divisors only ?
  // binary among divisors ? NO 45, 3,5 
  vector<int> v;
  for(int i=1;i<=n;i++){
   if(n%i==0){v.push_back(i);}
  }
  
  for(auto it:v){
   // saare parts same hai
   int f=1;
   int cnt=0;
   for(int i=0;i<it;i++){
    unordered_map<char,int> mp;
    for(int j=i;j<n;j=j+it){
     mp[s[j]]++;
     // if(s[i]==s[j]){continue;}
     // else{cnt++;}
    }
    if(mp.size()==1){}
    if(mp.size()>2){f=0;}
    if(mp.size()==2){
     int val=mp[s[i]];
     if(val==1 or val+1==n/it){cnt++;}
     else{f=0;}
    }
   }
   // cout<<it<<" "<<f<<endl;
   if(f and cnt<=1){ans=it;break;}
  }
  cout<<ans<<endl;
 }
 
 return 0;
}
//E