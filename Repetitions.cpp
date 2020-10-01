#include <bits/stdc++.h>
 
#define     ll          long long
#define     ln          "\n"
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define     mod         1e9 + 7
#define     rep(i, n)   for (long long i = 0; i < n; i++)
#define     all(x)      (x).begin(), (x).end()
#define     debug(x)    cerr << #x << " = " << x << endl;
 
using namespace std;
 
void solve()
{   
    int n;
    string s;
    cin>>s;
    n = s.length();
 
    s += 'x';
    int cnt=1, ans=-1;
    for(int i=0; i<=n; i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            ans = max(ans, cnt);
            cnt=1;
        }
    }
    cout << ans;
 
 
}
 
int32_t main()
{
    fastio;
    
    int t=1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
