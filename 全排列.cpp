//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> path;
//void backtracking(vector<int>& nums, vector<bool>& used) {//�����㷨
//    if (path.size() == nums.size()) {//�����ҵ�һ�����
//        for (int i = 0; i < path.size()) {
//            cout << path[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//    for (int i = 0; i < nums.size(); i++) {
//        if (used[i] == true) continue; //��������ʹ�ù���������û��ʹ�ù����Ϊture������path����
//        used[i] = true;
//        path.push_back(nums[i]);
//        backtracking(nums, used);
//        path.pop_back();
//        used[i] = false;
//    }
//}
//int main() {
//    vector<int> nums;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int x;
//        nums.push_back(x);
//    }
//    vector<bool> used(nums.size(), false);//used�����ʾ��Ӧ�������Ƿ�ʹ�ù�
//    backtracking(nums, used);
//    return 0;
//}