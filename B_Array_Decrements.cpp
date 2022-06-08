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
    ll n;
    cin>>n;
    int a[n], b[n], m1=-1,m2=-1, mn1=INT_MAX, mn2=INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        m1=max(a[i], m1);
        mn1=min(mn1,a[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>>b[i];
        m2=max(b[i], m2);
        mn2=min(b[i], mn2);
    }
    if(m1<m2)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(mn1 < mn2){
        cout<<"NO"<<endl;
        return;
    }
    set<int>s;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if(a[i] < b[i])
        {
            cout<<"NO"<<endl;
            return;
        }
        if(b[i] != 0)
          s.insert(a[i]-b[i]);
    }
    if(s.size() >1)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
    
	
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