#include <bits/stdc++.h>

using namespace std;
#define ll long long int
               
 
int main()
{
   
    int t;
    cin >>t;
    while(t--){
        	ll n;
    cin>>n;
    string s;
    cin>>s;
    ll k;
    cin>>k;
    char a[k];
    for(int i=0;i<k;i++)
       cin>>a[i];
    string t="";
    for(int i=0;i<k;i++)
       t+=a[i];
    vector<int>v;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(s[j]==t[i])
              v.push_back(j);
        }
    }
    sort(v.begin() , v.end());
    if(v[0] != 0){
        int ind=0;
        for(int i=0;i<v.size();i++){
            s.erase( s.begin()+ind, s.end()- (v[i] - 1));
            ind=v[i]+1;
        }
    }
    else{
        int ind=1;
        for(int i=1;i<v.size();i++){
            s.erase( s.begin()+ind, s.end()- (v[i] - 1));
            ind=v[i]+1;
        }
    }
    cout<<s.length()-1<<endl;
    }
    return 0;
}
