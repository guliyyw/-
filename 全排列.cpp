//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> path;
//void backtracking(vector<int>& nums, vector<bool>& used) {//回溯算法
//    if (path.size() == nums.size()) {//代表找到一组组合
//        for (int i = 0; i < path.size()) {
//            cout << path[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//    for (int i = 0; i < nums.size(); i++) {
//        if (used[i] == true) continue; //若该数字使用过，跳过，没有使用过则改为ture，加入path数组
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
//    vector<bool> used(nums.size(), false);//used数组表示对应的数字是否被使用过
//    backtracking(nums, used);
//    return 0;
//}