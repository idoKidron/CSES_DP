//#include <iostream>
//
//using namespace std;
//
//int ways[1000001] = {0};
//
//int countWays(int n, int x)
//{
//    if(x == 0)
//    {
//        return 0;
//    }
//    if(ways[x] != 0)
//    {
//        return ways[x];
//    }
//    int c = x;
//    int res = -1;
//    int temp;
//    while(c != 0)
//    {
//        if(c%10 == 0)
//        {
//            c /= 10;
//            continue;
//        }
//        temp = countWays(n, x - (c%10));
//        if(temp < res || res == -1)
//        {
//            res = temp;
//        }
//        c = c / 10;
//    }
//    ways[x] = res + 1;
//    return ways[x];
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    cout << countWays(n, n);
//}