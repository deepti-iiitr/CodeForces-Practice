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


void solve(){
    ll n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
          cin>>a[i][j];
    }
    vector<int>v1(m),v2(m);
   for(int i=0;i<m;i++)
      v1[i]=a[0][i];
    for(int i=0;i<m;i++)
      v2[i]=a[n-1][i];
    vector<int>t1=v1;
    vector<int>t2=v2;
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    // for(int i=0;i<m;i++){
    //     cout<<v1[i]<<" ";
    // }
    if(v1 ==t1 && v2==t2)
      cout<<"1 1"<<endl;
    else {
        reverse(t1.begin(), t1.end());
        reverse(t2.begin(), t2.end());
        if(t1==v1 && t2==v2)
          cout<<"1 "<<m<<endl;
        else
           cout<<"-1"<<endl;
    }
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