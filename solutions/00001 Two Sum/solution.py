class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        buff_dict = {}
        for i, num in enumerate(nums):
            if num in buff_dict:
                return [buff_dict[num], i]
            buff_dict[target-num] = i
        return []
