//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	stack<int> vis;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= '0' && s[i] <= '9') {
//			vis.push(s[i] - '0');
//		}
//		else {
//			int b = vis.top();
//			vis.pop();
//			int a = vis.top();
//			vis.pop();
//			int c = 0;
//			if (s[i] == '+') {
//				c = a + b;
//			}
//			else if(s[i] == '-') {
//				c = a - b;
//			}
//			else if (s[i] == '*') {
//				c = a * b;
//			}
//			else if (s[i] == '/') {
//				c = a / b;
//			}
//			vis.push(c);
//		}
//	}
//	cout << vis.top() << endl;
//}