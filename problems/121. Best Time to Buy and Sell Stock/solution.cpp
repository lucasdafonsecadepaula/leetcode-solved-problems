// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int bestBuy = prices[0];
        int bestProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            int curPrice = prices[i];
            if (curPrice - bestBuy > bestProfit)
            {
                bestProfit = curPrice - bestBuy;
            }
            if (curPrice < bestBuy)
            {
                bestBuy = curPrice;
            }
        }

        return bestProfit;
    }
};