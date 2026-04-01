class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {

            // If index is even, nums[i] should be <= nums[i+1]
            if(i % 2 == 0) {
                if(nums[i] > nums[i+1]) {
                    swap(nums[i], nums[i+1]);
                }
            }

            // If index is odd, nums[i] should be >= nums[i+1]
            else {
                if(nums[i] < nums[i+1]) {
                    swap(nums[i], nums[i+1]);
                }
            }
        }
    }
};