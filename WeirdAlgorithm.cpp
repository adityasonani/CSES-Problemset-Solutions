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
    fastio;
    ll n;
    cin>>n;
 
    cout << n << " ";
    while(n != 1){
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        cout << (ll)n << " ";
    }
    return 0;
}
