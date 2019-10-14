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
