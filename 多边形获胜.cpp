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
//	cin >> nums[0] >> nums[1] >> nums[2];//�����Ժ�ɫ�����ν�������
//	for (int i = 1; i < n; i++) {
//		cin >> G[i].a >> G[i].b >> G[i].c;//��������������
//	}
//	if ((abs(nums[0] - nums[1]) + abs(nums[0] - nums[2]) + abs(nums[1] - nums[2])) > 1) {//�жϺ�ɫ�������Ƿ��ڱ�Ե������ڱ�Ե������ʤ��
//		cout << "J Win" << endl;
//	}
//	else if(n % 2 == 0) {//��ɫ�����β��ڱ�Եʱ���й��ɣ���nΪż��ʱ������Ӯ������ʱ����Ӯ
//		cout << "J Win" << endl;
//	}
//	else {
//		cout << "Y Win" << endl;
//	}
//	return 0;
//}