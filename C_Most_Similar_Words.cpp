
#include <bits/stdc++.h>
#define endl ("\n")

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 10e+7;

//Deepti Template 


#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int solve2(string& s1, string& s2){
	int res = 0;
    for(int i = 0; i < s1.size(); ++i) {
        res += abs(s1[i] - s2[i]);
    }
    return res;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i = 0; i < n; ++i) {
            cin >> s[i];
        }
	int ans=INT_MAX;
    for(int i = 0; i < n; ++i){
		for(int j=i+1;j<n;j++){
			ans=min(ans, solve2(s[i], s[j]));
		}
	}
	cout<<ans<<endl;
}
int main()
{
	fast_cin();
	ll t;
	cin >> t;
	while(t--) {
	
		solve();
	}
	return 0;
}