/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define PI acos(-1)
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    int64_t ans = 0;
    std::vector<std::vector<int>> dp(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i <= 1 || j == 0 || j == m - 1 || a[i][j] != a[i - 1][j] || a[i][j] != a[i - 2][j] || a[i][j] != a[i - 1][j - 1] || a[i][j] != a[i - 1][j + 1]) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = std::min({dp[i - 1][j], dp[i - 2][j], dp[i - 1][j - 1], dp[i - 1][j + 1]}) + 1;
            }
            ans += dp[i][j];
        }
    }
    std::cout << ans << "\n";
    return 0;
}