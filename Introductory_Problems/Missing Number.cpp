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
    int n;
    cin >>n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cin>>arr[i];
    }
    int ans = 0;
    if(n==2){
        if(arr[0] == 1) ans = 2;
        else if(arr[0] == 2) ans = 1;
    }
    sort(arr, arr+n-1);
    for(int i = 1; i < n-1; i++){
        if(arr[i] - arr[i-1] != 1){
            ans = arr[i]-1;
        }
    }
    
    if(ans == 0) ans = n;
 cout<<ans<<endl;
}


int32_t main(){
	fastio
	int test_cases = 1;
     //cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
