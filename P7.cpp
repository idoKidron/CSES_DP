#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;
typedef std::pair<int, int> pairType;

int ways[1000][100001];

int countWays(const vector<pairType>& store, int n, int i, int x)
{
    if(i == n)
    {
        return 0;
    }
    if(ways[i][x] != -1)
    {
        return ways[i][x];
    }
    int res;
    if(x - store[i].first >= 0)
    {
        res = max(store[i].second + countWays(store, n, i+1, x - store[i].first),
                  countWays(store, n, i+1, x));
    }
    else
    {
        res = 0;
    }

    ways[i][x] = res;
    return res;
}

int main()
{
    // knapsack dynamic algorithm
    int n,x, temp;
    cin >> n >> x;
    vector<pairType> store;
    int prices[n];
    for(int i=0; i<n; i++)
    {
        cin >> prices[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        store.push_back(make_pair(prices[i], temp));
    }

    sort(begin(store), end(store),
         [](pairType& first, pairType& second)->bool { return first.first < second.first; });

    fill(ways, ways + (sizeof(ways) / sizeof(int)), -1);
    cout << countWays(store, n, 0, x);
}