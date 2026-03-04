class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        vector<vector<int>> m;
        calculate(res, target, 0, 0, candidates, m);
        return m;
    }

private:
    void calculate(vector<int>& res, int target, int sum, int index,
                   vector<int>& nums, vector<vector<int>>& m) {
        if (index >= nums.size()) {
            return;
        }
        if (sum == target) {
            m.push_back(res);
            return;
        }
        if (sum > target) {
            return;
        }
        sum += nums[index];
        res.push_back(nums[index]);
        calculate(res, target, sum, index, nums, m);
        sum -= nums[index];
        res.pop_back();
        calculate(res, target, sum, index + 1, nums, m);
        return;
    }
};