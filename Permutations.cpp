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
    int n;
    cin>>n;
    if(n==1){
        cout << 1;
        return;
    }
    if(n<=3){
        cout << "NO SOLUTION";
        return;
    }
    for(int i=2; i<=n; i+=2){
        cout << i << " ";
    }
    for(int i=1; i<=n; i+=2){
        cout << i << " ";
    }
    
    
 
 
 
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
