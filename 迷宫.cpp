//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<queue>
//
//using namespace std;
//
//const int MAXV = 105; 
//const int INF = 2147483647;
//int G[35][55];
//int m, n;
//int mins[35][55];
//char strs[1000];
//int best = INF;
//string zimu = "RLDU";
//string answer = "";
//int gx[4] = { 0,0,1,-1 };
//int gy[4] = { 1,-1,0,0 };
//
//void dfs(int x, int y, int ans) {
//
//	if (ans > best) {
//		return;
//	}
//	if (x == m && y == n) {
//		string s;
//		for (int i = 1; i < ans; i++) {
//			s += strs[i];
//		}
//		if (ans < best) {
//			best = ans;
//			answer = s;
//		}
//		else if(ans == best && s < answer){
//			answer = s;
//		}
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int tempx = x + gx[i];
//		int tempy = y + gy[i];
//		if (tempx > 0 && tempy > 0 && tempx <= m && tempy <= n && G[tempx][tempy] == 0 && ans + 1 <= mins[tempx][tempy]) {
//			G[tempx][tempy] = 1;
//			mins[tempx][tempy] = ans + 1;
//			strs[ans] = zimu[i];
//			dfs(tempx, tempy, ans + 1);
//			G[tempx][tempy] = 0;//回溯找短的路，或者时字典序最小的。
//		}
//	}
//}
//
//int main() {
//	m = 30;
//	n = 50;
//	for (int i = 1; i <= m; i++) {
//		string x;
//		cin >> x;
//		for (int j = 1; j <= n; j++) {
//			if (x[j - 1] == '0') {
//				G[i][j] = 0;
//			}
//			else {
//				G[i][j] = 1;
//			}
//		}
//	}
//	G[1][1] = 1;
//	fill(mins[0], mins[0] + 35 * 55, INF);
//	dfs(1, 1, 1);
//	cout << 1 << endl;
//	cout << answer << endl;
//	return 0;
//}