//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//bool check(int x, int y, int z)//判断是否有2/4
//{
//    int res = 0;
//    while (x)
//    {
//        res = x % 10;
//        if (res == 2 || res == 4)
//            return false;
//        x = x / 10;
//    }
//    while (y)
//    {
//        res = y % 10;
//        if (res == 2 || res == 4)
//            return false;
//        y = y / 10;
//    }
//    while (z)
//    {
//        res = z % 10;
//        if (res == 2 || res == 4)
//            return false;
//        z = z / 10;
//    }
//    return true;
//}
//int main()
//{
//    int ans = 0;
//    int n;
//    cin >> n;
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 1; j < n; j++)
//        {
//            if (i == j)
//                continue;
//            for (int k = 1; k < n; k++)
//            {
//                if (i == k || j == k)
//                    continue;
//                if (i + j + k == n && check(i, j, k))
//                    ans++;
//            }
//        }
//    }
//    cout << ans / 6 << endl;//分解的三个数有六种排序算一种情况，结果/6；
//    return 0;
//}