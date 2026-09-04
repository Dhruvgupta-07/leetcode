class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int rmax = 0;
        for (int i = 0; i < n; i++) {
            rmax = max(rmax, nums[i]);
            int rmin = nums[i];
            for (int j = i; j < n; j++) {
                rmin = min(rmin, nums[j]);
            }
            if (rmax - rmin <= k) {
                return i;
            }
        }
        return -1;
    }
};