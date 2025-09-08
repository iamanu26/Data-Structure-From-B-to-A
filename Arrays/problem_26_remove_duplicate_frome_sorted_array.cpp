// This solution will take TIME COMP. of O(N) and SPACE COMP. of O(1);

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 0 ; j<n ; j++)
        {
            if(nums[j] != nums[i])
            {
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates(nums);
    if(ans==5)
    {
    cout<<"Test pass"<<endl;
    return 0;
    }
    cout<<"Test fail"<<endl;

    return 0;
}