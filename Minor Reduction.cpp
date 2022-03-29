//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string nums;
//		cin >> nums;
//		int j;
//		bool flag = false;
//		for (j = nums.size() - 1; j > 0; j--) {
//			if (nums[j] + nums[j - 1] - 2 * '0' >= 10) {
//				flag = true;
//				break;
//			}
//		}
//		if (flag) {
//			for (int m = 0; m < nums.size(); m++) {
//				if(m == j - 1) {
//					cout << nums[j] + nums[j - 1] - 2 * '0';
//					m++;
//					continue;
//				}
//				cout << nums[m];
//			}
//			cout << endl;
//		}
//		//else if (nums[1] != '0') {
//		else {
//			cout << nums[0] + nums[1] - 2 * '0';
//			for (int m = 2; m < nums.size(); m++) {
//				cout << nums[m];
//			}
//			cout << endl;
//		}
//		//else {
//		//	for (int m = 0; m < nums.size() - 2; m++) {
//		//		cout << nums[m];
//		//	}
//		//	cout << nums[nums.size() - 1] + nums[nums.size() - 2] - 2 * '0';
//		//	cout << endl;
//		//}
//	}
//	return 0;
//}