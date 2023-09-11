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

void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    if(n==1)cout<<1<<endl;
    else if(n < 4 && n != 1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
       for(int i = 0; i < n; i++){
           if((i+1)%2 == 0)ans.push_back(i+1);
       }
       for(int i = 0; i < n; i++){
           if((i+1)%2 != 0)ans.push_back(i+1);
       }
       for(int i = 0; i < ans.size(); i++){
           cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
    
}
 
 
int32_t main(){
	fastio
	int test_cases = 1;
     //cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
