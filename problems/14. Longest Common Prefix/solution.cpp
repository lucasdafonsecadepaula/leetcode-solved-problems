// https://leetcode.com/problems/longest-common-prefix/

#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string longesCommonPrefix = strs[0];

        for (int i = 0; i < strs.size(); i++)
        {
            int j = 0;

            while (j < strs[i].size() && j < longesCommonPrefix.size() &&
                   strs[i][j] == longesCommonPrefix[j])
            {
                j++;
            }

            longesCommonPrefix = strs[i].substr(0, j);
            if (longesCommonPrefix.size() == 0)
                return "";
        }

        return longesCommonPrefix;
    }
};