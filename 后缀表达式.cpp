//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int n, m;
//    cin >> n >> m;
//    int nums[200005];
//    for (int i = 0; i < n + m + 1; i++) {
//        cin >> nums[i];
//    }
//    sort(nums, nums + n + m + 1);
//    for (int i = 0; i < n + m; i++) {
//        for (int j = i + 1; j < n + m + 1; j++) {
//            if (fabs(nums[i]) < fabs(nums[j])) {
//                int t = nums[i];
//                nums[i] = nums[j];
//                nums[j] = t;
//            }
//        }
//    int ans = 0;
//    for (int i = 0; i < n + m + 1; i++) {
//        ans += nums[i];
//    }
//
//    cout << ans << endl;
//    return 0;
//}