// This solution will take TIME COMP. of O(N) and SPACE COMP. of O(1);

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
            count++;
    }

    if (count > 1)
        return false;

    return true;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    bool ans = check(nums);
    if(ans==1)
    {
    cout<<"Test pass"<<endl;
    return 0;
    }
    cout<<"Test fail"<<endl;

    return 0;
}