/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> tmp;
        size_t size_ = nums.size();
        unordered_map<int, int> hashtable;
        hashtable[0] = 
        for(int i = 0; i < size_; i++)
        {
            if(hashtable.find(target - nums[i]) != hashtable.end())
                return tmp;
            else
                hashtable[i] = nums[i];
        }
        return tmp;
        return nullptr;
    }
};
// @lc code=end

