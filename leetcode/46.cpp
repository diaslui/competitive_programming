
void backtracking(auto &ans, vector<int> &nums, int pos){
    if (pos+1 == nums.size()){
        ans.push_back(nums);
        return;
    }

    for (int i=pos; i < nums.size(); i++){
        
        swap(nums[pos], nums[i]);
        backtracking(ans, nums, pos+1);
        swap(nums[pos], nums[i]);
        
    }
    
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    backtracking(ans, nums, 0);

    return ans;

    }
};
