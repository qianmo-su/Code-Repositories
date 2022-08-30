// Date: 2022-08-13 22:35:12
// Problem: C. Sort Zero
// Contest: Codeforces Round #813 (Div. 2)
// URL: https://codeforces.com/contest/1712/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// Author: Codeboy

/////////////////////// Macros & Head ////////////////////

#include <bits/stdc++.h>
// #define int long long
#define Re register
#define F(i,l,r) for(int i=l;i<r;++i)
#define Fe(i,l,r) for(int i=l;i<=r;++i)
#define Fer(i,l,r) for(int i=l;i>=r;--i)
#if __cplusplus < 201703L
#define rF(i,l,r) for(Re int i=l;i<r;++i)
#define rFe(i,l,r) for(Re int i=l;i<=r;++i)
#define rFer(i,l,r) for(Re int i=l;i>=r;--i)
#else
#define rF(i,l,r) F(i,l,r)
#define rFe(i,l,r) Fe(i,l,r)
#define rFer(i,l,r) Fer(i,l,r)
#endif
#if __x86_64__ || __ppc64__
typedef __int128 lll;
#else
typedef long long lll;
#endif
#ifndef LOCAL
#define endl '\n'
#endif
#define all(x) (x).begin(),(x).end()
#define enr(i, u) for(int i=h[u];i;i=ne[i])
#define chmax(a, b) if((a)<(b)){(a)=(b);}
#define chmin(a, b) if((a)>(b)){(a)=(b);}
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
clock_t startTime;
inline double getCurrentTime() {return (double)(clock() - startTime) / CLOCKS_PER_SEC;}
inline void fastio(){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
constexpr int dir[4][2] = { 1, 0, -1, 0, 0, 1, 0, -1 };
constexpr int inf = 0x3f3f3f3f;

//////////////////// Global Variables ////////////////////

constexpr int N = 100005;

/////////////////////// Functions ////////////////////////

int st[N], idx, cnt, a[N];

////////////////////// Main Execution ////////////////////

signed main(){
  	fastio();
  	int t;
  	cin>>t;
  	while(t--){
  		int n, idx = 0;
  		cnt = 0;
  		memset(st, 0, sizeof st);
  		cin>>n;
  		Fe(i, 1, n) cin>>a[i];
  		if(n == 1) {
  			cout<<0<<endl;
  			continue;
  		}
  		Fer(i, n - 1, 1){
  			if(a[i + 1] < a[i]){
  				idx	= i;
  				break;
  			}
  		}
  		// cerr<<idx<<endl;
  		Fe(i, 1, idx){
  			st[a[i]] = 1;
  		}

		Fer(i, n, 2){
  			if(st[a[i]] == 1){
  				st[a[i-1]] = 1;
  			}
  		}

		Fe(i, 1, n) {
			cnt += st[i];
			// cerr<<st[i]<<' ';
		}
		cout<<cnt<<endl;
  	}
	return 0;
}

////////////////////// The End... ////////////////////////

////////////// Hope everything goes well. ////////////////

////////////////// So long, Farewell! ////////////////////