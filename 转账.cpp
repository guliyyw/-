//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "iostream"
//using namespace std;
//
//const int MAXV = 2010;
//const int INF = 1000000000;
////n��������m������s��㣬t�յ�
////G�������cost���Ѿ���
////d[]������̾���
//
//int n, m,G[MAXV][MAXV];
//int d[MAXV];
//double c[MAXV];
//bool vis[MAXV] = { false };//�����Ƿ����
//
//void Dijkstra(int s) { //sΪ���
//	fill(d, d + MAXV, INF);
//
//	fill(c, c + MAXV, INF);
//	c[s] = 100;
//	d[s] = 0;//��㵽�Լ��ľ���Ϊ0
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
//					d[v] = d[u] + G[u][v];//����v�����С����
//					c[v] = c[u] + (c[u] * G[u][v]) / (100 - G[u][v]);//������Ҫ����Ǯ
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
