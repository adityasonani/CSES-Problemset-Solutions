#include <bits/stdc++.h>
 
#define     int          long long
#define     ln          "\n"
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define     mod         1e9 + 7
#define     rep(i, n)   for (long long i = 0; i < n; i++)
#define     all(x)      (x).begin(), (x).end()
#define     debug(x)    cerr << #x << " = " << x << endl;
 
using namespace std;
 
void solve()
{   
    int a;
    cin>>a;
    
    for(int n=1; n<=a; n++){
        int ans = (((n*n)*((n*n)-1))/2) - 4*(n-1)*(n-2);
        cout << ans << ln;
    }
 
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
