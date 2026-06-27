class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    
    map<int, int> m;
    int ans, curr, l;
    ans = 0; curr = 0; l = 0;

    for (int r=0; r < nums.size(); r++){
        m[nums[r]]++;
        curr += nums[r];
        while (m[nums[r]] > 1){
            m[nums[l]]--;
            curr -= nums[l];
            l++;
        }

        ans = max(ans, curr);
    }


    return ans;
    }
};
