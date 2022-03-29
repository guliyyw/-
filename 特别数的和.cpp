//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int sums = 0;
//	for (int i = 1; i <= n; i++) {
//		int x = i;
//		while (x > 0) {
//			int ans = x % 10;
//			if (ans == 2 || ans == 0 || ans == 1 || ans == 9) {
//				sums += i;
//				break;
//			}
//			else {
//				x /= 10;
//			}
//		}
//	}
//	cout << sums << endl;
//}