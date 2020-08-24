/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
// @lc code=start
#include <vector>
using namespace std;

class Solution
{
public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
                vector<int> result;
                for (int i = 0; i < nums.size(); i++)
                {
                        int surplus = target - nums[i];
                        for (int j = i + 1; j < nums.size(); j++)
                        {
                                if (surplus == nums[j])
                                {
                                        result.push_back(i);
                                        result.push_back(j);
                                }
                        }
                }
                return result;
        }
};
// @lc code=end
