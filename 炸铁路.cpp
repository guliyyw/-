//#include "iostream"
//#include "algorithm"
//using namespace std;
//
//const int MAXV = 1000;//��󶥵���
//const int MAXE = 10000;//������
////�߼�����
//struct edge {
//	int u, v;//�ߵ�2��������
//}E[MAXE];
//
//bool cmp(edge a, edge b) {//sort�������
//	if (a.u != b.u) return a.u < b.u;
//	else return a.v < b.v;
//}
////���鼯����
//int father[MAXV];
//
//int findfather(int x) {//���鼯��ѯ���ڵ㣬�����·��ѹ��
//	if (x == father[x]) return x;
//	else {
//		int F = findfather(father[x]);
//		father[x] = F;
//		return F;
//	}
//}
//
//void kruskal(int n, int m,int x) {
//	int num_edge = 0;//ans�����Ȩ֮�ͣ�num_edgeΪ��ǰ�������ı���
//	for (int i = 1; i <= n; i++) { //���㷶Χ[1,n]
//	//for (int i = 0; i < n; i++) { //���㷶Χ[0,n-1]
//		father[i] = i;//���鼯��ʼ��
//	}
//	for (int i = 0; i < m; i++) { // ö�����б�
//		if (x != i) {//ifɾȥ����x��i֮��ı�
//			int fau = findfather(E[i].u);//��ѯ���������˵����ڼ��ϵĸ��ڵ�
//			int fav = findfather(E[i].v);
//			if (fau != fav) {
//				father[fau] = fav;//�ϲ����ϣ������Ա߼��뼯��
//				num_edge++;//��ǰ������������һ
//			}
//			if (num_edge == n - 1)break;//�������ڶ�������һʱ����
//		}
//	}
//	if (num_edge != n - 1) {//����x��i֮��ı�ɾ�����ܹ�����ͨ
//		cout << E[x].u << ' ' << E[x].v << endl;
//	}
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> E[i].u >> E[i].v;
//		if (E[i].u > E[i].v) {
//			int x = E[i].u;
//			E[i].u = E[i].v;
//			E[i].v = x;
//		}
//	}// ����
//	sort(E, E + m, cmp);
//	for (int i = 0; i < m; i++) {
//		kruskal(n, m, i);
//	}
//	return 0;
//}
