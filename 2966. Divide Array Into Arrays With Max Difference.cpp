//Date - 01/02/2024, Thursday
//Problem - 2966. Divide Array Into Arrays With Max Difference

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i+=3)
        {
            vector<int> res;
            if(abs(nums[i]-nums[i+2])<=k)
            {
                res.push_back(nums[i]);
                res.push_back(nums[i+1]);
                res.push_back(nums[i+2]);
                ans.push_back(res);
            }
            else
                continue;
        }
        if(ans.size()!=(nums.size()/3))
            return {};
        return ans;
    }
};
