#include <bits/stdc++.h>
 
#define     ll          long long
#define     ln          "\n"
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define     mod         1e9 + 7
#define     rep(i, n)   for (int i = 0; i < n; i++)
#define     all(x)      (x).begin(), (x).end()
#define     debug(x)    cerr << #x << " = " << x << endl;
 
 
using namespace std;
 
 
int main()
{
    // literally integer overflow sucks
 
    fastio;
    long long n, a;
    cin>>n;
 
    long long sm = (n*(n+1))/2;
 
    for(long long i=0; i<n-1; i++){
        cin>>a;
        sm -= a;
    }
    cout << (ll)sm;
    
    return 0;
}
