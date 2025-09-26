#include<bits/stdc++.h>

using namespace std;

void helper(vector<int>&nums , int ind , vector<vector<int>>&ans , vector<int>current)
    {
        if(ind == nums.size())
        {
            ans.push_back(current);
            return;
        }
        current.push_back(nums[ind]);
        helper(nums , ind+1 , ans , current);
        current.pop_back();
        helper(nums , ind+1 , ans , current);
    }

void print(vector<vector<int>>&arr)
{
    int n = arr.size();

    for(int i = 0 ; i<n ; i++)
    {
        cout<<"[";
        for(int j = 0 ; j<arr[i].size(); j++)
        {
            cout<<arr[i][j];
        }
        cout<<"], ";
       
    }
}

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    vector<int> nums(n);

    for(int i =0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    vector<vector<int>>ans;
    vector<int> current;
    helper(nums , 0 , ans , current);
    print(ans);

    return 0;
}