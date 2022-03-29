//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "iostream"
//using namespace std;
//
//const int MAXV = 2010;
//const int INF = 1000000000;
////n顶点数，m边数，s起点，t终点
////G距离矩阵，cost花费矩阵
////d[]到点最短距离
//
//int n, m,G[MAXV][MAXV];
//int d[MAXV];
//double c[MAXV];
//bool vis[MAXV] = { false };//顶点是否访问
//
//void Dijkstra(int s) { //s为起点
//	fill(d, d + MAXV, INF);
//
//	fill(c, c + MAXV, INF);
//	c[s] = 100;
//	d[s] = 0;//起点到自己的距离为0
//	for (int i = 1; i <= n; i++) {
//		int u = -1, MIN = INF;
//		for (int j = 1; j <= n; j++) {
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) {
//			return;
//		}
//		vis[u] = true;
//		for (int v = 1; v <= n; v++) {
//			if (!vis[v] && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];//到达v点的最小距离
//					c[v] = c[u] + (c[u] * G[u][v]) / (100 - G[u][v]);//计算需要多少钱
//				}
//				else if (d[u] + G[u][v] == d[v] && c[v] > c[u] + (c[u] * G[u][v]) / (100 - G[u][v])) {
//					c[v] = c[u] + (c[u] * G[u][v]) / (100 - G[u][v]);
//					//pre[v] = u;
//				}
//			}
//		}
//	}
//	return;
//}
//
//int main() {
//	scanf_s("%d%d", &n, &m);
//	int u, v, l;
//	fill(G[0], G[0] + MAXV * MAXV, INF);
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d%d%d", &u, &v, &l);
//		if (G[u][v] > l) {
//			G[u][v] = l;
//			G[v][u] = l;
//		}
//	}
//	int s, t;
//	scanf_s("%d%d", &s, &t);
//	Dijkstra(t);
//	//cout << c[s] << endl;
//	printf("%.8f\n", c[s]);
//	return 0;
//}
