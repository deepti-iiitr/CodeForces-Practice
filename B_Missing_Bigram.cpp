#include <bits/stdc++.h>
#define endl ("\n")

using namespace std;

typedef long long ll;
typedef long double ld;
// typedef pair<int,int> p32;
// typedef pair<ll,ll> p64;
// typedef pair<double,double> pdd;
// typedef vector<ll> v64;
// typedef vector<int> v32;
// typedef vector<vector<int> > vv32;
// typedef vector<vector<ll> > vv64;
// typedef vector<vector<p64> > vvp64;
// typedef vector<p64> vp64;
// typedef vector<p32> vp32;
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
    ll len;
    cin>>len;
    //cout<<len;
    ll st= len-2;
    string temp="";
    vector<string> s(st);
    for(int i=0;i<len-2;i++)
        {
           string t;
            cin>>t;
            //cout<<t;
            temp=temp+t;
            
            s.push_back(t); 
            // cout<<s[i][0];
            // cout<<s[i][1];
        }
        //cout<<temp<<endl;
    string res="";
    res+=temp[0];
    res+=temp[1];
    //cout<<res<<endl;
    ll n= temp.size();
    ll last=1;
    for(int i=2;i<n-2;i=i+2){
       if(res[last]== temp[i])
          res+=temp[i+1];
       else
         {
              res+=temp[i];
              res+=temp[i+1];
         }
        last++;
    }
    if(res.size() < len){
       while(res.size()<len)
          res+="a";
       
    }
    for(int i=0;i<res.size();i++)
       cout<<res[i];
    cout<<endl;

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