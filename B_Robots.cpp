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
    int n,m,r=0, minx=32767, miny=32767;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>arr[i][j];
               if(arr[i][j]=='R')
                 {
                     minx = min(minx, i);
                     miny = min(miny, j);
                 }
           }
       }
       if(arr[minx][miny] == 'R')
          cout<<"YES"<<endl;
       else
          cout<<"NO"<<endl;
   
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
