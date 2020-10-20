//#include <iostream>
//#define MOD 1000000007
//#define TRAP '*'
//
//using namespace std;
//
//int ways[1000][1000] = {0};
//
//int countWays(char** grid, int i, int j)
//{
//    if(ways[i][j] == -1)
//    {
//        if(grid[i][j] == TRAP)
//        {
//            ways[i][j] = 0;
//        }
//        else
//        {
//            if(i != 0 && j != 0)
//            {
//                ways[i][j] = countWays(grid, i - 1, j) + countWays(grid, i, j - 1);
//            }
//            else
//            {
//                if(i == 0)
//                {
//                    ways[i][j] = countWays(grid, i, j - 1);
//                }
//                else
//                {
//                    ways[i][j] = countWays(grid, i - 1, j);
//                }
//            }
//        }
//        ways[i][j] %= MOD;
//    }
//    return ways[i][j];
//
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    char** grid = new char*[n];
//    for(int i=0; i < n; i++)
//    {
//        grid[i] = new char[n];
//    }
//    for(int i=0; i < n; i++)
//    {
//        for(int j=0; j < n; j++)
//        {
//            cin >> grid[i][j];
//            ways[i][j] = -1;
//        }
//    }
//    if(grid[0][0] == TRAP)
//    {
//        cout << 0;
//    }
//    else
//    {
//        ways[0][0] = 1;
//        cout << countWays(grid, n-1, n-1);
//    }
//
//}