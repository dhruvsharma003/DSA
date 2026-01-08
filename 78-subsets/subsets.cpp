class Solution {
public:
    void printsubset(vector<int>& nums,vector<int> &curr,vector<vector<int>> &ans, int i ){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        printsubset(nums,curr,ans,i+1);
        curr.pop_back();
        printsubset(nums,curr,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        printsubset(nums,curr,ans,0);
        return ans;
    }
};