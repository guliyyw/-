//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int nums[100005];
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> nums[i];
//    }
//    sort(nums, nums + n);
//    int x;
//    int mmin = 2147483647;
//    for (int i = 1; i < n; i++) {
//        x = nums[i] - nums[i - 1];
//        mmin = min(x, mmin);
//    }
//    if (mmin == 0) {
//        cout << n << endl;
//        return 0;
//    }
//    for (int i = 1; i < n; i++) {
//        if ((nums[i] - nums[0]) % mmin != 0) {
//            cout << nums[n - 1] - nums[0] + 1 << endl;
//            return 0;
//        }
//    }
//    cout << (nums[n - 1] - nums[0]) / mmin + 1 << endl;
//    return 0;
//}