class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
        int lastNonZeros = 0;

        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i] != 0)
            {
                nums[lastNonZeros] = nums[i];
                lastNonZeros++;
            }
        }
        for(int i = lastNonZeros ; i<n ; i++)
        {
            nums[i] = 0;
        }
    }
};
