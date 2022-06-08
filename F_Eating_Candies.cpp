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
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int l=0,r=n-1, suml=a[0], sumr=a[n-1], ans=0;
   while (l < r){
        if(suml == sumr)
        {
            int t=l + 1 + n - r;
            ans = max(ans,t );
        }

        if(suml < sumr)
            {
                l+=1;
            suml+=a[l];
            }

        else 
            {
                r-=1;
            sumr+=a[r];
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