
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
    string s;
    cin>>s;
     ll n=s.length();
    string s1="";
    for(int i=n-1;i>0;i--)
    {
        int a=s[i]-'0';
        int b=s[i-1]-'0';
        if(a+b>9)
        {
            for(int j=0;j<i-1;j++)cout<<s[j];
            cout<<a+b;
            for(int j=s1.length()-1;j>=0;j--)cout<<s1[j];
            cout<<"\n";
            return;
        }
        else s1+=s[i];
    }
    if(n==2)
    {
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<"\n";
    }
    else{
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<s.substr(2)<<"\n";
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