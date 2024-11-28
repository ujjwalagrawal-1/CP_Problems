//**					Be name Khoda					**/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <memory.h>
#include <limits>
#include <cassert>
using namespace std;

#define ll long long
#define un unsigned
#define IT iterator
#define VAL(x) #x << " = " << x << "   "
#define SQR(a) ((a) * (a))
#define ALL(x) x.begin(), x.end()
#define SZ(x) ((int) x.size())
#define CLR(a, x) memset(a, x, sizeof a)
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define SAL cout << "Salam!\n"
#define MAXN 110
#define MOD 1000000007
//#define cout fout
//#define cin fin

int a[MAXN][5];
int n, l;
ll ans = 0;

void dfs(int x, int y, int sum)
{
    if (sum == l)
    {
        ans ++;
        ans = ans % MOD;
        return;
    }
    if (sum > l)
        return;
    for (int i = 0; i < n; i ++)
        if (i != x)
        {
            for (int j = 0; j < 2; j ++)
            {
                if (a[i][j] == a[x][!y])
                    dfs(i, j, sum + a[i][j]);
                if (a[i][j] == a[i][!j])
                    break;
            }
        }
}

int main ()
{
    cin >> n >> l;
    for (int i = 0; i < n; i ++)
        cin >> a[i][0] >> a[i][1];
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < 2; j ++)
        {
            dfs(i, j, a[i][j]);
            if (a[i][j] == a[i][!j])
                break;
        }
    cout << ans << endl;
	return 0;
}
