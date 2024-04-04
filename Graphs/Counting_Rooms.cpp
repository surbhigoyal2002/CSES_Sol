#include <bits/stdc++.h>
 
#define int long long
#define endl "\n"
#define spc " "
#define INF_INT 2e9
#define INF_LL 2e18
#define matmax 25
#define mod 1e9+7    
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
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, -1, 1};
void dfs(int r, int c, vector<vector<char>> &v, vector<vector<int>> &vis, int n , int m){
   vis[r][c] = 1;
   for(int i = 0; i  <4; i++){
       int nr = r + dr[i];
       int nc = c + dc[i];
       if( nr > 0 && nc > 0 && nc < m && nr < n && v[nr][nc] == '.'  && vis[nr][nc] == 0){
           dfs(nr, nc, v, vis, n, m);
       }
   }

} 
void solve(){
    int n, m;
    cin >>n >>m;
//     vector<int> a(n);
//     fori(0, n){
//         cin>>a[i];
//    }
   vector<vector<char>> v(n, vector<char>(m));
   for(int i = 0; i < n; i++){
       for(int j = 0; j  <m; j++){
           cin>>v[i][j];
       }
   }

    vector<vector<int>> vis(n, vector<int>(m, 0));
   
    int ans = 0;
   for(int i = 0; i < n; i++){
       for(int j = 0; j  <m; j++){
         if(v[i][j] == '.'){
             if(!vis[i][j]){
                 dfs(i, j, v, vis, n, m);
                 ans++;
             }
         }
       }
   }
   cout<<ans<<endl;
   
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
 
	int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--)solve();
    return 0;
 
}
