// https://leetcode.com/problems/find-closest-number-to-zero/description/

#include <cmath>
#include <vector>
using namespace std;

class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int closestNumberToZero = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            int curDistToZero = abs(nums[closestNumberToZero]);
            int newDistToZero = abs(nums[i]);

            if (newDistToZero < curDistToZero)
            {
                closestNumberToZero = i;
            }

            if (newDistToZero == curDistToZero)
            {
                closestNumberToZero = nums[closestNumberToZero] >= nums[i] ? closestNumberToZero : i;
            }
        }

        return nums[closestNumberToZero];
    }
};