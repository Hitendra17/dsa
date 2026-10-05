class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> t;

        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];

            if (t.find(temp) != t.end()) {
                return {t[temp], i};
            }

            t[nums[i]] = i;
        }

        return {};
    }
};