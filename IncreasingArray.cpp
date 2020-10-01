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
    // rep(i, 9) cout << (int)(1000000000-1)*i << ln;
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i, n) cin>>v[i];
 
    int cnt=0;
    for(int i=1; i<n; i++){
        // start from index 1 and just check if the current
        // element is smaller than previous
        if(v[i]<v[i-1]) {
 
            // if so then just increment this current element
            // upto same as previous element. (for min count)
 
            cnt += v[i-1]-v[i];
            // debug(cnt);
 
            // make current element equal to previous element
            v[i] = v[i-1];
        }
    }
    cout << cnt;
 
 
}
 
int32_t main()
{
    // fastio;
    
    int t=1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
