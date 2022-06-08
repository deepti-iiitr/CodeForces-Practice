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
    for(int i=0;i<n;i++)
       cin>>a[i];
    sort(a, a+n);
    int b[n];
    int mid=n/2;
    int i=0,j=mid,ind=0;
    while(i<=mid){
        b[ind]=a[i];
        ind++;
        b[ind]=a[j];
        i++;
        j++;
        ind++;
    }
	if(j<n-1)
       b[ind]=a[j];
    if((b[0]>b[1] && b[0]>b[n-1]) || (b[0]<b[1] && b[0]<b[n-1]))
    {
        for(int i=1;i<n-1;i++){
            if((b[i]>b[i-1] && b[i]>b[i+1])  || (b[i]<b[i-1] && b[i]<b[i+1]))
              continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        if( (b[n-1]>b[n-2] && b[n-1]>b[0]) || (b[n-1] < b[n-2] && b[n-1]< b[0]))
          {
              cout<<"YES"<<endl;
             for(int i=0;i<n;i++) 
                cout<<b[i]<<" ";
            cout<<endl;
          }
          else
             cout<<"NO"<<endl;
    }
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