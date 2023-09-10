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
    
    vector<int> v;
    v.push_back(n);
    while(v.back() != 1){
        if(n%2 == 0){
            n = n/2;
            v.push_back(n);
        } 
        else if(n%2 != 0){
            n = n*3 + 1;
            v.push_back(n);
        }
    }
    
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
}


int32_t main(){
	fastio
	int test_cases = 1;
     //cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
