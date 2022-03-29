//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int dp[1005][2010];
//int main() {
//	int n;
//    cin >> n;
//	int p[1005];
//	for (int i = 0; i < n; i++) {
//		cin >> p[i];
//	}
//    int k;
//    cin >> k;
//    for (int j = 1; j < 2 * k; j += 2) {
//        dp[0][j] = -p[0];
//    }
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < 2 * k - 1; j += 2) {
//            dp[i][j + 1] = max(dp[i - 1][j + 1], dp[i - 1][j] - p[i]);
//            dp[i][j + 2] = max(dp[i - 1][j + 2], dp[i - 1][j + 1] + p[i]);
//        }
//    }
//    cout << dp[n - 1][2 * k] << endl;
//    return 0;
//} 