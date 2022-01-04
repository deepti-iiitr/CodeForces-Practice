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
    ll arr[3],s=0;
    for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
    sort(arr,arr+3);
   //cout<<s;
    if( s%2 == 0)
    {
          int last= arr[2];
          
          if(last== arr[1]+arr[0]){
              cout<<"YES"<<endl;
              
              return;
          } 
          else if( arr[0]== arr[1]){
              if(arr[2]%2 == 0)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
            
          }
          else if(arr[1]==arr[2])
          {
             
              if(arr[0]%2==0)
                 cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
          }
          else
            cout<<"NO"<<endl;
    }
    else if(s%2 == 1)
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