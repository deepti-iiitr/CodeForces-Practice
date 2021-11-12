    #include <bits/stdc++.h>
    using namespace std;
     
    #define rep(i,n) for (i = 0; i < n; ++i)
    #define REP(i,k,n) for (i = k; i <= n; ++i)
    #define REPR(i,k,n) for (i = k; i >= n; --i)
     
    int main()
    {
    	std::ios_base::sync_with_stdio(false);
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         string t= s;
         sort(t.begin(), t.end());
         int ind;
         for(int i=0;i<s.length();i++){
             if(t[0]== s[i])
             {
                ind=i;
                break;
             }
         }
         s.erase(s.begin()+ind);
         cout<<t[0]<<" "<<s<<endl;
     }
      
    	return 0;
    }