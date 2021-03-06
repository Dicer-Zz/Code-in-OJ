/*
* @Author: Dicer
* @Date:   2018-10-09 16:42:10
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-09 17:43:12
*/
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e6+10;
const int MAXM = 1e6+10;

int a[MAXN], ans[MAXN];

int cnt = 1;
void f(int n, int mul){
	if(n == 1)	{ans[cnt++] = mul; return;}
	if(n == 2)	{ans[cnt++] = mul; ans[cnt++] = mul*2; return;}
	if(n == 3)	{ans[cnt++] = mul; ans[cnt++] = mul; ans[cnt++] = mul*3; return;}
	for(int i=1; i<=n; ++i)	if(a[i]&1)	{ans[cnt++] = mul;}
	for(int i=1; i< n>>1; ++i)	a[i] = a[2*i+1]/2;
	f(n>>1, mul*2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)	a[i] = i;
	f(n, 1);
	for(int i=1; i<=n; ++i)	cout << ans[i] << ' ';
	return 0;
}