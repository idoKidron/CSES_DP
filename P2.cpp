//#include <iostream>
//
//using namespace std;
//
//int minCoins(int* coins, int n, int x)
//{
//    if(x == 0)
//    {
//        return 0;
//    }
//    if(x < 0)
//    {
//        return -1;
//    }
//    int res = -1, temp;
//    for(int i=0; i < n; i++)
//    {
//        temp = minCoins(coins, n, x - coins[i]) + 1;
//        if(temp == 0)
//        {
//            continue;
//        }
//        if(temp < res || res == -1)
//        {
//            res = temp;
//        }
//    }
//    return res;
//}
//
//int main()
//{
//    int n, x;
//    cin >> n >> x;
//    int coins[n];
//    int* ways = new int[x+1];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> coins[i];
//    }
//    ways[0] = 0;
//    for(int i=1; i < x+1; i++)
//    {
//        int res = -1;
//        int temp;
//
//        for(int j=0; j < n; j++)
//        {
//            if(i - coins[j] < 0)
//            {
//                continue;
//            }
//            temp = ways[i - coins[j]];
//            if( (temp != -1 && temp < res) || res == -1)
//            {
//                res = temp;
//            }
//        }
//        if(res == -1)
//        {
//            ways[i] = -1;
//        }
//        else
//        {
//            ways[i] = res + 1;
//        }
//    }
//
//    cout << ways[x];
//}