class Solution {
public:
    void sub(vector<int> &nums,vector<vector<int>> &ans,vector<int> &res,int id){
        if(id == nums.size()){
            // ans.push_back(res);
            return;
        }
        for(int i=id;i<nums.size();i++){
            if(i!=id && nums[i]==nums[i-1]) continue;
            res.push_back(nums[i]);
            ans.push_back(res);
            sub(nums,ans,res,i+1);
            res.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans={{}};
        vector<int> res;
        sub(nums,ans,res,0);
        return ans;
    }
};
