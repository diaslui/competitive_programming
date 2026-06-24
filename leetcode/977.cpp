class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l, r; l = 0; r = nums.size()-1;
        int pos = r;
        while (l <= r){
            if (abs(nums[l]) > abs(nums[r])){
                    ans[pos] = nums[l] * nums[l];
                    l++;
            }else{
                ans[pos] = nums[r] * nums[r];
                r--;
            }
            pos--;
        }

        return ans;

    }
};
