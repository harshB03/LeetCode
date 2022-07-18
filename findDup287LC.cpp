// 287. Find the Duplicate Number
// Medium

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int low = 1, high = nums.size() - 1, count;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            count = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++count;
            }
            // binary search on left
            if(count <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
    }
};

//TC-O(logn)
//SC-O(1)