//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int nums[105] = { 0 };
//	for (int i = 1; i <= n; i++) {
//		cin >> nums[i];
//	}
//	if (n <= 2) {
//		cout <<  max(nums[1], nums[2]) << endl;
//		return 0;
//	}
//	int dp[105] = { 0 };
//	dp[1] = nums[1];
//	dp[2] = nums[2];
//	for (int i = 3; i < n; i++) {
//		dp[i] = max(dp[i - 2], dp[i - 3]) + nums[i];
//	}
//	int max1 = max(dp[n - 1], dp[n - 2]);
//	dp[3] = nums[3];
//	for (int i = 4; i <= n; i++) {
//		dp[i] = max(dp[i - 2], dp[i - 3]) + nums[i];
//	}
//	int max2 = max(dp[n], dp[n -1]);
//	cout << max(max1, max2) << endl;
//	return 0;
//}