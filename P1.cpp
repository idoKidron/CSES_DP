//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int m = 1000000007;
//    int n;
//    cin >> n;
//    long long ways[max(n+1, 7)];
//    for(int i = 0; i < max(n+1, 7); i++)
//    {
//        ways[i] = 0;
//    }
//
//    for(int i = 1; i < 7; i++)
//    {
//        for(int j = 0; j < i; j++)
//        {
//            ways[i] += ways[j];
//        }
//        ways[i]++;
//    }
//    for(int i = 7; i < max(n+1, 7); i++)
//    {
//        for(int j = 1; j < 7; j++)
//        {
//            ways[i] += ways[i - j];
//            ways[i] %= m;
//        }
//    }
//
//    cout << ways[n];
//}
