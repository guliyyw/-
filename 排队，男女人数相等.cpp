//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	vector<int> dp;
//	int n;
//	string s;
//	cin >> s;
//	n = s.length();
//	int G = 0, B = 0;
//	for (int i = 0; i < n; i++) {//���벢����G��B�ĸ���֮��
//		if (s[i] == 'B') {
//			B++;
//		}
//		else {
//			G++;
//		}
//		dp.push_back(B - G);
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		if (i + ans >= n) {
//			break;
//		}
//		for (int j = n - 1; j > i + ans; j--) {//���������ҳ�����֮������Ҿ�����Զ
//			if (dp[i] == dp[j]) {
//				ans = max(ans, j - i);
//				break;
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}