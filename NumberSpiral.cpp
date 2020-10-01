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
    int x,y;
    cin>>x>>y;
 
    int ans=0;
    if(y>x){
        if(y%2) ans = (y*y)-x+1;
        else ans=((y-1)*(y-1))+x;
    }
    else{
        if(x%2==0) ans = (x*x)-y+1;
        else ans = ((x-1)*(x-1)) + y;
    }
    cout << ans << endl;
 
}
 
int32_t main()
{
    fastio;
    
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
