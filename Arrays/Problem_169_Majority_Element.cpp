class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int element ;
       int count = 0 ; 
       for(int i = 0 ; i< nums.size() ; i++)
       {
        if(count == 0 )
        {
            count = 1;
            element = nums[i];
        }
        else if (nums[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
       }
       int count_conf = 0;
       for(int i= 0 ; i< nums.size() ; i++)
       {
        if(nums[i] == element)
        {
            count_conf++;
        }
       }
       if(count_conf > nums.size()/2)
       {
        return element;
       }
       return NULL;
    }
};