/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-22 11:26:03

---------------------------------*/

#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e6 + 7;
const int MAXM = 1e5;

ll a[MAXN];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	int T;
	cin >> T;
	while(T--){
		int n, x;
		cin >> n;
		a[1] = 0;
		for(int i=1;i<n;++i){
			cin >> x;
			a[i+1] = a[i] + x;
		}
		if(n == 2){
			cout << 0 << ' ' << a[n] << endl;
			continue;
		}
		cout << 0 << ' ' << a[n] << ' ';
		int l = 1, r = n-1;
		ll sum = a[n], last = a[n];
		for(int i=3;i<=n;++i){
			if(i&1){
				sum += last;
				l++;
			}
			else {
				last += a[r]-a[l];
				sum += last;
				r--;
			}
			if(i == n)	cout << sum << endl;
			else cout << sum << ' ';
		}
	}
	return 0;
}
//0 2 5 6 10