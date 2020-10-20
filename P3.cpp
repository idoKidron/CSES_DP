//#include <iostream>
//#define MOD 1000000007
//
//using namespace std;
//
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
//    ways[0] = 1;
//    for(int i=1; i < x+1; i++)
//    {
//        int sum = 0;
//        int temp;
//
//        for(int j=0; j < n; j++)
//        {
//            if(i - coins[j] < 0)
//            {
//                continue;
//            }
//            sum += ways[i - coins[j]];
//            sum %= MOD;
//        }
//        ways[i] = sum;
//    }
//
//    cout << ways[x];
//}