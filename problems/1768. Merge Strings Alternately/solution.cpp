// https://leetcode.com/problems/merge-strings-alternately/description/

#include <string>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string newWord;
        int i = 0;

        while (i < word1.size() && i < word2.size())
        {
            newWord.push_back(word1[i]);
            newWord.push_back(word2[i]);
            i++;
        }

        if(i < word1.size()) newWord += word1.substr(i, word1.size());
        if(i < word2.size()) newWord += word2.substr(i, word2.size());
        
        return newWord;
    }
};