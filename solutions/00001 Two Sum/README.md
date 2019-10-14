# 1. [Two Sum](https://leetcode.com/problems/two-sum/) (Easy)

## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

## Analysis

This problem is to find two numbers in a list, which add up to a specific number(target).

We can easy figure out a solution, using two loops.
The time complexity of this solution is O(n^2).

With the help of some data structures, we can solve the problem in O(n) time complexity.
In the O(n) time complexity solution, we use only one loop.
We want to judge whether there is the target pair in the list in O(1) time complexity.
To this end, we use hashmap, which can find the item in O(1) time complexity.


## C++ Solution

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

## Python Solution

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

