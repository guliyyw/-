//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//const int N = 100005;
//
//struct node
//{
//	int l, r;
//}t[N];
//
//bool cmp(node a, node b) {
//	return a.l < b.l;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> t[i].l >> t[i].r;
//	}
//	sort(t + 1, t + 1 + n,cmp); 
//	priority_queue<int, vector<int>, greater<int> > s;
//	for (int i = 1; i <= n; i++)
//	{
//		if (s.empty() || s.top() >= t[i].l) s.push(t[i].r);
//		else
//		{
//			s.pop();
//			s.push(t[i].r);
//		}
//	}
//	cout << s.size();
//	return 0;
//}
//
