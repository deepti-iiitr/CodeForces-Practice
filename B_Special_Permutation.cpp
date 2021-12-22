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
	ll n, a,b;
	cin>>n>>a>>b;
	int v[n];
	for(int i=0;i<n;i++)
	    v[i]=i+1;
	ll check=n/2-1;
	ll c1=0,c2=0;
	bool vis[n]={false};
	for(int i=0;i<n;i++){
		if(v[i]>a && v[i]!=b && v[i]==false)
		  {
			  c1++;
			  v[i]=true;
		  }
		else if(v[i] <b && v[i]!=a && v[i]==false)
		  {
			  c2++;
			  v[i]=true;
		  }
	}
	if( c1>= check && c2>=check){
		bool vis2[n]={false};
		cout<<a<<" ";
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(count<check){
				if(v[i] >a && v[i]!=b && vis[i]==false)
			       {
					   cout<<v[i]<<" ";
					   count++;
					   vis[i]=true;
				   }
			}
		}
		count=0;
		cout<<b<<" ";
		for(int i=0;i<n;i++)
		{
			if(count<check){
				if(v[i] < b && v[i]!=a && vis[i]==false)
			    {
					cout<<v[i]<<" ";
					count++;
					vis[i]=true;
				}
			}
		}
		cout<<endl;
	}
	else 
	  cout<<"-1"<<endl;
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