//#include <iostream>
//
//using namespace std;
//
//struct node {
//	int a, b, c;
//}G[50005];
//
//int main() {
//	int n;
//	cin >> n;
//	int nums[3];
//	cin >> nums[0] >> nums[1] >> nums[2];//单独对黑色三角形进行输入
//	for (int i = 1; i < n; i++) {
//		cin >> G[i].a >> G[i].b >> G[i].c;//输入其他三角形
//	}
//	if ((abs(nums[0] - nums[1]) + abs(nums[0] - nums[2]) + abs(nums[1] - nums[2])) > 1) {//判断黑色三角形是否在边缘，如果在边缘，先手胜利
//		cout << "J Win" << endl;
//	}
//	else if(n % 2 == 0) {//黑色三角形不在边缘时，有规律，当n为偶数时，先手赢，奇数时后手赢
//		cout << "J Win" << endl;
//	}
//	else {
//		cout << "Y Win" << endl;
//	}
//	return 0;
//}