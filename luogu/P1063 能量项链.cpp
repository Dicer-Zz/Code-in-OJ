/*
* @Author: Dicer
* @Date:   2018-10-11 16:11:38
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-11 16:38:51
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
const int MAXN = 1e5;
const int MAXM = 1e5;

int a[233];
int dp[233][233];
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for(int i=1;i<=n;++i)	{cin >> a[i];a[i+n] = a[i];}
	for(int len = 2; len <=n; ++len){
		for(int i=1; i<=2*n-1; ++i){
			int j = len+i-1;
			if(j>2*n)	break;
			for(int k=i; k<j;++k){
				dp[i][j] = max(dp[i][j], dp[i][k]+dp[k+1][j]+a[i]*a[k+1]*a[j+1]);
			}
		}
	}
	int ans = 0;
	for(int i=1;i<=n;++i)	ans = max(ans, dp[i][i+n-1]);
	cout << ans << endl;
	return 0;
}