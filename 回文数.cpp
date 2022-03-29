//#include <iostream>
//#include <string>
//#include <algorithm>
//
//
//using namespace std;
//
//int nums1[100000], nums2[100000];
//
//bool isPalindrome(int len) {
//	for (int j = 0; j <= len / 2; j++) {
//		if (nums1[j] != nums1[len - j - 1]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	string m;
//	cin >> n >> m;
//	int j = 0;
//	for (int i = m.length() - 1; i >= 0; i--) {
//		if (m[i] <= '9') {
//			nums1[j++] = m[i] - '0';
//		}
//		else {
//			nums1[j++] = m[i] - 'A' + 10;
//		}
//	}
//	int len = m.length();
//	int i = 0;
//	while (i <= 30) {
//		if (isPalindrome(len)) {
//			break;
//		}
//		for (int j = 0; j < len; j++) {
//			nums2[j] = nums1[len - j - 1];
//		}
//		for (int j = 0; j < len; j++) {
//			nums1[j] += nums2[j];
//			nums1[j + 1] += nums1[j] / n;
//			nums1[j] %= n;
//		}
//		if (nums1[len] > 0) {
//			len++;
//		}
//		i++;
//	}
//	if (i <= 30) {
//		cout << "STEP=" << i << endl;
//	}
//	else {
//		cout << "Impossible!" << endl;
//	}
//}