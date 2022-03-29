//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int nums[26] = { 0 };
//		string strs;
//		cin >> strs;
//		for (int j = 0; j < strs.size(); j++) {
//			nums[strs[j] - 'a']++;
//		}
//		string s;
//		for (int j = 0; j < 26; j++) {
//			if (nums[j] == 2) {
//				s += 'a' + j;
//			}
//		}
//		s += s;
//		for (int j = 0; j < 26; j++) {
//			if (nums[j] == 1) {
//				s += 'a' + j;
//			}
//		}
//		cout << s << endl;
//	}
//	return 0;
//}