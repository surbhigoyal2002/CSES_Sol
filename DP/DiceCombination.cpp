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
 
 
// const int X = 1e7+10;
// vector<bool> isPrime(X, 1);

void dfs(int node, vector<int> &vis, vector<vector<int>> &adj){
    if(adj[node].size() == 0)return;
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj);
        }
    }
} 

int f(int n, vector<int> &arr, vector<int> &dp){
   if(n == 0) return 1;
   int ans = 0;
   if(dp[n] != -1) return dp[n];
   for(int i = 0; i < 6; i++){
       if(arr[i] <= n){
           ans = (ans + f(n-arr[i], arr, dp))%mod;
       }
   }
   return ans;
}
void solve(){
    int n;
    cin >>n ;
//     vector<int> a(n);
//     fori(0, n){
//         cin>>a[i];
//    }
    vector<int> arr = {1,2,3,4,5,6};
    vector<int> dp(n+1, -1);
    int a = f(n, arr, dp);
  
    cout<<a<<endl;
   
   
}
       
int32_t main(){
	fastio
        // isPrime[0] = isPrime[1] = 0;
        // for(int i = 2; i < X; i++){
        //     if(isPrime[i] == true){
        //         for(int j = 2*i; j < X; j += i){
        //             isPrime[j] = false;
        //         }
        //     }
        // }
 
	int test_cases=1;
    // cin >> test_cases;
    while(test_cases--)solve();
    return 0;
 
}
