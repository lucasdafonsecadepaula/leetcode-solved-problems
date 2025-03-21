// https://leetcode.com/problems/roman-to-integer/description/

#include <string>
using namespace std;

int getRomanInteger(char c)
{
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
    return 0;
}

class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (getRomanInteger(s[i]) >= getRomanInteger(s[i + 1]))
            {
                res += getRomanInteger(s[i]);
            }
            else
            {
                res -= getRomanInteger(s[i]);
            }
        }

        res += getRomanInteger(s[s.size() - 1]);

        return res;
    }
};