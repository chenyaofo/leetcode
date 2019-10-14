# 1. [Two Sum](https://leetcode.com/problems/two-sum/) (easy)

## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

## Analysis


## C++ solution

```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> buff_dict;
        for (auto i = 0; i < nums.size(); ++i) {
            if (buff_dict.find(nums[i]) != buff_dict.end()){
                return {buff_dict[nums[i]],i};
            }
            buff_dict.emplace(target-nums[i], i);
        }
        return {};
    }
};
```

## Python solution

```
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        buff_dict = {}
        for i, num in enumerate(nums):
            if num in buff_dict:
                return [buff_dict[num], i]
            buff_dict[target-num] = i
        return []
```

