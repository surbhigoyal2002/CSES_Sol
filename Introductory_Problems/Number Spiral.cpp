#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define spc " "
#define INF_INT 2e9
#define INF_LL 2e18
#define matmax 25
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define pip pair<int,pi>
#define pl pair<ll,ll>
#define plp pair<ll,pl>
#define vi vector<int>
#define vvi vector<vector<int>>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define ins insert
#define lb lower_bound  // First element NOT LESS than val
#define ub upper_bound  // First element GREATER than val
#define sz(q) (int)(q.size())

using namespace std;

#define fori(a,b) for(auto i=a;i<b;++i)
#define foir(a,b) for(auto i=a;i>=b;--i)
#define forj(a,b) for(auto j=a;j<b;++j)
#define forjr(a,b) for(auto j=a;j>=b;--j)

// bool isPrime(int n){
//     if (n <= 1)
//         return false;
 
//     for (int i = 2; i <= n / 2; i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }
void solve(){
    int y,x;
    cin>>y>>x;
    int ans = 0;
    if(y == x){
        ans = (x*x) - (x-1);
    }
    else if(x > y){
        if(x%2 != 0){
            ans = (x*x) - (x-1) + (x-y);
        }
        else ans = (x*x) - (x-1) - (x-y);
    }
    else if(y > x){
        if(y%2 != 0){
            ans = (y*y) - (y-1) - (y-x);
        }
        else ans = (y*y) - (y-1) + (y-x);
    }
    cout<<ans<<endl;
    
}


int32_t main(){
	fastio
	int test_cases ;
    cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
